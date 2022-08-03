#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void    solve(int h_s, int m_s, vector<pair<int, int> > alarms)
{
        sort(alarms.begin(), alarms.end());
        for (int i=0; i<alarms.size(); i++)
        {
                if (alarms[i].first > h_s || (alarms[i].first == h_s && alarms[i].second >= m_s))
                {
                        if (alarms[i].second >= m_s)
                                cout << alarms[i].first - h_s << " " << alarms[i].second - m_s << endl;
                        else
                                cout << alarms[i].first - h_s - 1 << " " << alarms[i].second + 60 - m_s << endl;
                        return ;
                }
        }
        if (alarms[0].second >= m_s)
                cout << alarms[0].first + 24 - h_s << " " << alarms[0].second - m_s << endl;
        else
                cout << alarms[0].first + 24 - h_s - 1 << " " << alarms[0].second + 60 - m_s << endl;
}

void    parse()
{
        int                     h_s, m_s, n;
        vector<pair<int, int> > alarms;

        cin >> n >> h_s >> m_s;
        for (int i=0; i<n; i++)
        {
                int     h, m;

                cin >> h >> m;
                alarms.push_back(make_pair(h, m));
        }
        solve(h_s, m_s, alarms);
}

int main()
{
        int     cases;

        cin >> cases;
        while (cases--)
                parse();
        return (0);
}
