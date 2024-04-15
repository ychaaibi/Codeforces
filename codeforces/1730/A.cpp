#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

void    solve(vector<int> orbis, int c)
{
        int     mn = 0;

        for (int i=0; i<101; i++) mn += min(orbis[i], c);
        cout << mn << endl;
}

void    parse()
{
        vector<int>     orbis(101);
        int             s, c;

        cin >> s >> c;
        for (int i=0; i<s; i++)
        {
                int     o;

                cin >> o;
                orbis[o]++;
        }
        solve(orbis, c);
}

int     main()
{
        int     cases = 1;

        cin >> cases;
        while (cases--)
                parse();
        return (0);
}