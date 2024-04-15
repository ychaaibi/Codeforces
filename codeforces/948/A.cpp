#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <climits>

using namespace std;


void    solve(vector<string> mp)
{
        int     Dogs = 0;
        int     direction[4][2] = {{1, 0}, {0, 1}, {-1, 0}, {0, -1}};

        for (int i=0; i<mp.size(); i++)
        {
                for (int j=0; j<mp[i].size(); j++)
                {
                        if (mp[i][j] == 'S')
                        {
                                for (int k=0; k<4; k++)
                                {
                                        int     n_r = i + direction[k][0];
                                        int     n_c = j + direction[k][1];

                                        if (n_c >= mp[i].size() || n_c < 0 || n_r >= mp.size() || n_r < 0) continue ;
                                        if (mp[n_r][n_c] == 'W')
                                        {
                                                cout << "no" << endl;
                                                return ;
                                        }
                                        if (mp[n_r][n_c] == 'D' || mp[n_r][n_c] == 'S') continue ;
                                        mp[n_r][n_c] = 'D';
                                }
                        }
                }
        }
        cout << "yes" << endl;
        for (int i=0; i<mp.size(); i++) cout << mp[i] << endl;
}

void    parse()
{
        int             R, C;
        vector<string>  mp;

        cin >> R >> C;
        for (int i=0; i<R; i++)
        {
                string  s;

                cin >> s;
                mp.push_back(s);
        }
        solve(mp);
}

int     main()
{
        int     cases = 1;

        while (cases--)
                parse();
        return (0);
}
