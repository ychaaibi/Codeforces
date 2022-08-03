#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

void    solve(int s)
{
        char    solu[10];
        int     i = 8;

        solu[9] = 0;
        while (i >= 0 && s)
        {
                if (s < i + 1)
                {
                        solu[i] = s + 48;
                        i--;
                        break ;
                }
                solu[i] = i + 1 + 48;
                s -= i + 1;
                i--;
        }
        cout << solu + i + 1 << endl;
}

void    parse()
{
        int     s;

        cin >> s;
        solve(s);
}

int main()
{
        int cases;

        cin >> cases;
        while (cases--)
                parse();
        return (0);
}
