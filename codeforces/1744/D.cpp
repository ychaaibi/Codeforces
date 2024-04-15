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
    int n;

    cin >> n;
    vi  v(n);
    int n_power = 0;

    for (int i=0; i<n; i++) cin >> v[i];
    for (int i=0; i<n; i++)
    {
        int val;
        val = v[i];
        while (val and val % 2 == 0){
            n_power++;
            val >>= 1;
        }
    }
    int ans = 0;
    vi  powers;
    for (int i=1; i<=n; i++)
    {
        int count = 0;
        int val = i;

        while (val and val % 2 == 0)
        {
            count++;
            val >>= 1;
        }
        powers.push_back(count);
    }
    sort(powers.begin(), powers.end());
    for (int i=powers.size() - 1; i>=0 and n_power < n; i--)
    {
        ans++;
        n_power += powers[i];
    }
    if (n_power >= n)
        cout << ans << endl;
    else
        cout << -1 << endl;
}

int main()
{
    int cases = 1;

    cin >> cases;
    while (cases--)
        solve();
    return (0);
}