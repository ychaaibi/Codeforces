#include <vector>
#include <algorithm>
#include <iostream>
#include <string>

using namespace std;

void    solve()
{
        string s, t;

        cin >> s >> t;
        unsigned long long res = 1;
        for (int i=0; i<t.length(); i++)
        {
                if (t[i] == 'a' and t.length() != 1)
                {
                        cout << -1 << endl;
                        return ;
                }
        }
        if (t[0] == 'a')
        {
                cout << 1 << endl;
                return ;
        }
        for (int i=0; i<s.length(); i++)
                res *= 2;
        cout << res << endl;
}

int main()
{
        int     cases;

        cin >> cases;

        while (cases--)
                solve();
        return (0);
}