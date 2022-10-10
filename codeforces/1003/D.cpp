# include   <vector>
# include   <algorithm>
# include   <iostream>
# include   <map>
# include   <unordered_map>
# include   <set>
# include   <unordered_set>
# include   <string>
# include   <cmath>

# define    vi  vector<int>
# define    vs  vector<string>
# define    vvi vector<vector<int>>
# define    vvs vector<vector<string>>
# define    ll  long long
# define    ull unsigned long long
# define    lp(n) for (int i=0; i<n; i++)
# define    lp1(s, e, st) for (int i=s; i<e; i+=st)

using namespace std;

void    get_coins(int target, vector<int> tab)
{
    int ans = 0;
    int i = 30;
    int pw = 1 << 30;
    while (target > 0 and i >= 0)
    {
        //cout << pw << endl;
        int s = min(target / pw, tab[i]);

        target -= s * pw;
        ans += s;
        i--;
        pw = pw >> 1;
    }
    if (target)
        ans = -1;
    cout  << ans << endl;
}

void    solve()
{
    int n, q;
    vi  tab(31, 0);

    cin >> n >> q;
    for (int i=0; i<n; i++)
    {
        int v;

        cin >> v;
        tab[(int)log2(v)]++;
        //cout << "log " << log2(v) << " ";
    }
    while (q--)
    {
        int target;

        cin >> target;
        get_coins(target, tab);
    }
}

int main()
{
    int cases = 1;

    //cin >> cases;
    while (cases--)
        solve();
    return (0);
}