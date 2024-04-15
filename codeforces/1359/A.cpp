#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

void    solve(int c, int j, int p)
{
        int     mx_j = min(c / p, j);
        int     last_j = (j - mx_j) / (p - 1) + !!((j - mx_j) % (p - 1));

        if (!j){
                cout << 0 << endl;
                return ;
        }
        cout << mx_j - last_j << endl;

}

void    parse()
{
        int     c,j,p;

        cin >> c >> j >> p;
        solve(c, j, p);
}

int     main()
{
        int     cases;

        cin >> cases;
        while (cases--)
                parse();
        return (0);
}