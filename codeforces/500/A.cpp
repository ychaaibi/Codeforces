#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <climits>

using namespace std;

void    solve(vector<int> transport, int target)
{
        int     i = 1;

        while (i < target)
                i += transport[i - 1];
        if (i == target)
        {
                cout << "YES" << endl;
                return ;
        }
        cout << "NO" << endl;
}

void    parse()
{
        int     size, target;

        cin >> size >> target;
        vector<int>     transport;
        for (int i=0; i<size-1; i++)
        {
                int     portal;

                cin >> portal;
                transport.push_back(portal);
        }
        solve(transport, target);
}

int     main()
{
        int     cases = 1;

        while (cases--)
                parse();
        return (0);
}