#include <iostream>
#include <vector>


using namespace std;
void    solve(vector<int> marathon)
{
    int i = 1;
    int count = 0;

    while (i < marathon.size())
        count += (marathon[i++] > marathon[0]);
    cout << count << endl;
}

void    parse()
{
    vector<int> marathon(4);
    
    for(int i = 0; i < 4; i++) cin >> marathon[i];
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