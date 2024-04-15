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
    int             n;
    map<int, int>   mp;

    cin >> n;
    vi  v(n);
    for (int i=0; i<n; i++)
    {
        cin >> v[i];
        mp[v[i]]++;
    }
    int ans = n;
    for (int i=0; i<n; i++)
    {
        int p = 1 << 30;
        while (p > 1 and p > v[i])
        {
            if (mp.find(p - v[i]) != mp.end() and (v[i] != p - v[i] or mp[p - v[i]] > 1))
            {
                ans--;
                break ;
            }
            p = p >> 1;
        }
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