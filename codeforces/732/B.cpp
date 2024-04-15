#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void    solve(vector<int> days, int k)
{
        int     steps = 0;

        for (int i=1; i<days.size(); i++)
        {

                if (days[i] + days[i - 1] < k)
                {
                        steps += k - (days[i] + days[i - 1]);
                        days[i] += (k - (days[i] + days[i - 1]));
                }
        }
        cout << steps << endl;
        for (int i=0; i<days.size(); i++) cout << days[i] << " ";
        cout << endl;
}

void    parse()
{
        int     s, k;

        cin >> s >> k;
        vector<int>     days(s);
        for (int i=0; i<s; i++) cin >> days[i];
        solve(days, k);
}

int     main()
{
        int     cases = 1;

        //cin >> cases;
        while (cases--)
                parse();
        return (0);
}