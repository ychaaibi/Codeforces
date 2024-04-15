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

int tab[1001];

void    solve()
{
    int n;

    cin >> n;
    vi  v(n);
    vi  ans;
    for (int i=0; i<n; i++) cin >> v[i];
    for (int i=n - 1; i>=0; i--)
    {
        if (!tab[v[i]])
            ans.push_back(v[i]);
        tab[v[i]] = 1;
    }
    cout << ans.size() << endl;
    for (int i=ans.size() - 1; i>=0; i--)
        cout << ans[i] << " ";
}

int main()
{
    int cases = 1;

    //cin >> cases;
    while (cases--)
        solve();
    return (0);
}