# include   <vector>
# include   <algorithm>
# include   <iostream>
# include   <map>
# include   <unordered_map>
# include   <set>
# include   <unordered_set>
# include   <string>
# include   <cstring>

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
    int n;
    int tab[101];
    int ans = INT_MIN;

    cin >> n;
    memset(tab, 0, sizeof(int) * 101);
    for (int i=0; i<n; i++)
    {
        int v;
        
        cin >> v;
        tab[v]++;
        ans = max(ans, tab[v]);
    }
    cout << ans << endl;
}

int main()
{
    int cases = 1;

    //cin >> cases;
    while (cases--)
        solve();
    return (0);
}