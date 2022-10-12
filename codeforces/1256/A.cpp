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
    long long   a, b, n, S;

    cin >> a >> b >> n >> S;
    S -= min((long long )(S / n) * n, a * n);
    S -= b;
    if (S <= 0)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}

int main()
{
    int cases = 1;

    cin >> cases;
    while (cases--)
        solve();
    return (0);
}