#include <iostream>
#include <vector>
#include <map>


using namespace std;
void    solve(vector<int> marathon)
{
    map<int, int>   marathon_map;
    int             removed_len = 0;
    int             deja = 0;

    for (int i = 0; i < marathon.size(); i++)
    {
        if (marathon_map.find(marathon[i]) != marathon_map.end())
            marathon_map[marathon[i]] += 1;
        else
            marathon_map[marathon[i]] = 1;
    }
    
    for (auto it = marathon_map.begin(); it != marathon_map.end(); it++)
    {
        if (it->second > 1)
        {
            //cout << "[" << it->second << "]" << endl;
            removed_len += (it->second - 1) - ((it->second - 1) % 2);
            if ((it->second - 1) % 2)
            {
                if (deja)
                    removed_len += 2;
                deja = !deja;
            }
        }
    }
    cout << marathon.size() - removed_len - (deja * 2) << endl;
}

void    parse()
{
    int size;
    
    cin >> size;
    vector<int> marathon(size);
    
    for(int i = 0; i < size; i++) cin >> marathon[i];
    solve(marathon);
}

int main()
{
    int testCases;

    cin >> testCases;
    while (testCases--)
        parse();
    return (0);
}