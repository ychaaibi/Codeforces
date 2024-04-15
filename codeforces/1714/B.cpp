#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>
#include <string>

using namespace std;

void    solve(vector<int> items)
{
        int     *mem;
        int     mx = 0;

        mem = (int *)malloc(sizeof(int) * (items.size() + 1));
        memset(mem, 0, sizeof(int) * (items.size() + 1));
        for (int i=0; i<items.size(); i++)
        {
                //cout << mem[items[i]] << " " << items[i] << endl;
                if (mem[items[i]])
                        mx = max(mx, mem[items[i]]);
                mem[items[i]] = i + 1;
        }
        cout << mx << endl;
}

void    parse()
{
        int             size;
        vector<int>     arr;

        cin >> size;
        for (int i=0; i<size; i++)
        {
                int val;

                cin >> val;
                arr.push_back(val);
        }
        solve(arr);
}

int main()
{
        int     cases;

        cin >> cases;
        while (cases--)
                parse();
        return (0);
}
