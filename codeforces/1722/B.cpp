#include <algorithm>
#include <vector>
#include <string>
#include <iostream>

using namespace std;

int     solve(string r1, string r2)
{
        for (int i=0; i<r1.length(); i++)
        {
                if ((r1[i] == 'R' && (r2[i] == 'B' || r2[i] == 'G')) || (r2[i] == 'R' && (r1[i] == 'B' || r1[i] == 'G')))
                        return (0);
        }
        return (1);
}

void    parse()
{
        string          r1, r2;
        int             n;

        cin >> n >> r1 >> r2;
        if (solve(r1, r2))
                cout << "YES" << endl;
        else
                cout << "NO" << endl;
}

int     main()
{
        int     cases = 1;

        cin >> cases;
        while (cases--)
                parse();
        return (0);
}
