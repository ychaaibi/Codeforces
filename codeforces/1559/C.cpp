#include <vector>
#include <iostream>
#include <string>

using namespace std;

int     C[10002];

void    solve(int n)
{
        if (!C[n])
        {
                for (int i=1; i<=n+1; i++) cout << i << " ";
                cout << endl;
                return ;
        }
        if (C[1])
        {
                cout << n + 1 << " ";
                for (int i=1; i<=n; i++) cout << i << " ";
                cout << endl;
                return ;
        }
        for (int i=1; i<=n; i++)
        {
                if (!C[i] && C[i + 1])
                {
                        for (int j=1; j<=n; j++)
                        {
                                cout << j << " ";
                                if (j == i)
                                        cout << n + 1 << " ";
                        }
                        cout << endl;
                        return ;
                }
        }
        cout << -1 << endl;
}

void    parse()
{
        int     n;

        cin >> n;
        for (int i=1; i<=n; i++)
        {
                int     a;

                cin >> a;
                C[i] = a;
        }
        solve(n);
}

int     main()
{
        int     cases;

        cin >> cases;
        while (cases--)
                parse();
}
