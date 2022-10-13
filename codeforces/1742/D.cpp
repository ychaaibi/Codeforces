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

int tab[1001];

void    solve()
{
    int n;

    cin >> n;
    for (int i=0; i<1001; i++) tab[i] = -1;
    for (int i=0; i<n; i++)
    {
        int val;

        cin >> val;
        tab[val] = i;
    }
    int ans = -1;
    if (tab[1] != -1)
        ans = max(ans, tab[1] * 2 + 2);
    for (int i=1; i<=1000; i++)
    {
        for (int j=i + 1; j<=1000; j++)
        {
            if (tab[i] != -1 and tab[j] != -1 and __gcd((unsigned int)i, (unsigned int)j) == 1)
                ans = max(tab[i] + 1 + tab[j] + 1, ans);
        }
    }
    cout << ans << endl;
}

int main()
{
    int cases = 1;

    cin >> cases;
    while (cases--)
        solve();
    return (0);
}