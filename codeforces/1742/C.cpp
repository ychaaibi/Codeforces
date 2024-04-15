# include   <vector>
# include   <algorithm>
# include   <iostream>
# include   <map>
# include   <unordered_map>
# include   <set>
# include   <unordered_set>
# include   <string>

# define    vi  vector<int>
# define    vs  vector<string>
# define    vvi vector<vector<int>>
# define    vvs vector<vector<string>>
# define    ll  long long
# define    ull unsigned long long
# define    lp(n) for (int i=0; i<n; i++)
# define    lp1(s, e, st) for (int i=s; i<e; i+=st)

using namespace std;

void    solve()
{
    vs  v(8);

    for (int i=0; i<8; i++)
        cin >> v[i];
    for (int i=0; i<8; i++)
    {
        int count = 0;
        for (int j=0; j<8; j++)
        {
            if (v[i][j] != 'R')
                break ;
            count++;
        }
        if (count == 8)
        {
            cout << "R" << endl;
            return ;
        }
    }
    cout << "B" << endl;
}

int main()
{
    int cases = 1;

    cin >> cases;
    while (cases--)
        solve();
    return (0);
}