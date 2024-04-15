# include   <vector>
# include   <algorithm>
# include   <iostream>
# include   <map>
# include   <unordered_map>
# include   <set>
# include   <unordered_set>
# include   <string>
# include   <iomanip>

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
    int     n;
    int     k;
    double  ans = (double)0.00;

    cout.setf(ios::fixed);
    cin >> n >> k;
    vi  dp(n + 1);
    dp[0] = 0;
    for (int i=1; i<=n; i++)
    {
        cin >> dp[i];
        dp[i] += dp[i - 1];
    }
    for (int i=0; i<=n - k; i++)
    {
        for (int j=k; j<=n-i; j++)
            ans = max(ans, (double)(((double)dp[i + j] - (double)dp[i]) / j));
    }
    cout << setprecision(15) << (double)ans << endl;
}

int main()
{
    int cases = 1;

    //cin >> cases;
    while (cases--)
        solve();
    return (0);
}