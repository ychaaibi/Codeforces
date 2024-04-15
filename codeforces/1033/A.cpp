// Link ::: https://codeforces.com/problemset/problem/1033/A

#include <iostream>
#include <vector>
#include <string>
#include <queue>

using namespace std;

void    solve(int n, pair<int, int> queen, pair<int, int> king, pair<int, int> king_to)
{
        vector<vector<int> >    v;
        int                     direction[8][2] = {{1, 0}, {0, 1}, {-1, 0}, {0, -1}, {1, 1}, {-1, -1}, {-1, 1}, {1, -1}};

        queue<pair<int, int>>   q;

        for (int i=0; i<n; i++)
        {
                vector<int>     r(n, 0);

                v.push_back(r);
        }
        q.push(king);
        while (!q.empty())
        {
                king = q.front();
                q.pop();
                if (v[king.first][king.second]) continue;
                v[king.first][king.second] = 1;
                for (int i=0; i<8; i++)
                {
                        int     nr, nc;
                        nr = king.first + direction[i][0];
                        nc = king.second + direction[i][1];
                        if (nr >= n || nc >= n || nc < 0 || nr < 0) continue ;
                        if (nr + nc == queen.first + queen.second || abs(nr - nc) == abs(queen.first - queen.second)) continue ;
                        if (nr == queen.first || nc == queen.second) continue ;
                        if (v[nr][nc]) continue ;
                        if (nr == king_to.first && nc == king_to.second)
                        {
                                cout << "YES" << endl;
                                return ;
                        }
                        q.push(make_pair(nr, nc));
                }
        }
        cout << "NO" << endl;
}

void    parse()
{
        int             n;
        pair<int, int>  queen_pos;
        pair<int, int>  king_pos;
        pair<int, int>  king_to_pos;

        cin >> n;
        cin >> queen_pos.first >> queen_pos.second;
        queen_pos.first--, queen_pos.second--;
        cin >> king_pos.first >> king_pos.second;
        king_pos.first--, king_pos.second--;
        cin >> king_to_pos.first >> king_to_pos.second;
        king_to_pos.first--, king_to_pos.second--;
        solve(n, queen_pos, king_pos, king_to_pos);
}

int     main()
{
        int     cases = 1;

        while (cases--)
                parse();
}