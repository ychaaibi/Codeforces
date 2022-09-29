#include <algorithm>
#include <vector>
#include <string>
#include <iostream>

using namespace std;

void    solve(int n, int m)
{
        if (n == 1 || m == 1)
                cout << "1 1" << endl;
        else
                cout << "2 2" << endl;
}

void    parse()
{
        int     n, m;

        cin >> n >> m;
        solve(n, m);
}

int     main()
{
        int     cases = 1;

        cin >> cases;
        while (cases--)
                parse();
        return (0);
}