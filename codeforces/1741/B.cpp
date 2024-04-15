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
    vi  v;
    if (n == 3)
    {
        cout << -1 << endl;
        return ;
    }
    for (int i = (int)(n/2) + 1; i<=n; i++) v.push_back(i);
    for (int i = (int)(n/2); i>=1; i--) v.push_back(i);
    for (int i=0; i<n; i++) cout << v[i] << " ";
    cout << endl;
}

int main()
{
    int cases = 1;

    cin >> cases;
    while (cases--)
        solve();
    return (0);
}