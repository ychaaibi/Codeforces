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
    int     n;
    string  s;

    cin >> n >> s;
    for (int i=1; i<=n; i++)
    {
        if (n % i == 0)
        {
            string  sub = s.substr(0, i);
            reverse(sub.begin(), sub.end());
            s = sub + s.substr(i, s.length() - i);
        }
    }
    cout << s << endl;
}

int main()
{
    int cases = 1;

    //cin >> cases;
    while (cases--)
        solve();
    return (0);
}