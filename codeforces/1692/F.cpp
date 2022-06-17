#include <iostream>
#include <vector>
#include <cstring>


using namespace std;
int solve(vector<int>& nums)
{
    for (int i = 0; i < nums.size(); i++)
    {
        for (int j = i + 1; j < nums.size(); j++)
        {
            for (int k = j + 1; k < nums.size(); k++)
            {
                if ((nums[i] + nums[j] + nums[k]) % 10 == 3)
                    return (true);
            }
        }
    }
    return (false);
}
void    parse()
{
    int         size;
    int         seen[10];
    int         val;
    
    cin >> size;
    vector<int> nums;
    memset(seen, 0, 10 * 4);
    for (int i=0; i<size; i++){
        cin >> val;
        if (seen[val % 10] < 3)
            nums.push_back(val % 10);
        seen[val % 10]++;
    }
    if (solve(nums))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}

int main()
{
    int testCases;

    cin >> testCases;
    while (testCases--)
        parse();
    return (0);
}