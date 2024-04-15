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

using namespace std;

void    solve()
{
    int n;
    int k;

    cin >> n >> k; 
    unsigned long long   dp[n];
    for (int i=0; i<n; i++)
    {
        cin >> dp[i];
        if (i) dp[i] += dp[i - 1];
    }
    while (k--)
    {
        unsigned long long  letter;

        cin >> letter;
        int l = lower_bound(dp, dp + n, letter) - dp;
        if (l == 0)
            cout << 1 << " " << letter << endl;
        else
            cout << l + 1 << " " << letter - dp[l - 1] << endl;
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