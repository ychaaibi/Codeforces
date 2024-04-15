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
    int ans = 0;

    vi  stairways;
    cin >> n;
    vi v(n);
    for (int i=0; i<n; i++) cin >> v[i];
    int c = 0;
    for (int i=0; i<n; i++)
    {
        if (v[i] == 1)
        {
            if (c!=0)
            {
                stairways.push_back(c);
                ans++;
            }
            c = 1;
        }
        else
            c++;
    }
    if (c != 0)
    {
        ans++;
        stairways.push_back(c);
    }
    cout << ans << endl;
    for (int i=0; i<stairways.size(); i++) cout << stairways[i] << " ";
    cout << endl;
}

int main()
{
    int cases = 1;

    //cin >> cases;
    while (cases--)
        solve();
    return (0);
}