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
# define    lp(i, n) for (int i=0; i<n; i++)
# define    lp1(i, s, e, st) for (int i=s; i<e; i+=st)

using namespace std;

void    solve()
{
    int a, b, c;
    
    cin >> a >> b >> c;
    int mx = max(max(a, b), c);
    if (mx == a + b + c - mx)
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