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
# define    si  set<int>
# define    vpi vector<pair<int, int> >

using namespace std;

void    solve()
{
    map<int, si>   mp;
    int             n, k;

    cin >> n >> k;
    vpi             vpii(n);
    vi              v(n);
    vi              ans(n, 0);

    for (int i=0; i<n; i++) cin >> v[i];
    for (int i=0; i<n; i++)
    {  
        vpii[i].first = v[i];
        vpii[i].second = i;
    }
    sort(vpii.begin(), vpii.end());
    ans[0] = 0;
    for (int i=1; i<n; i++)
    {
        if (vpii[i].first == vpii[i - 1].first)
            ans[vpii[i].second] = ans[vpii[i - 1].second];
        else
            ans[vpii[i].second] = i;
    }
    while (k--)
    {
        int x, y;

        cin >> x >> y;
        if (v[x - 1] > v[y - 1])
            ans[x - 1]--;
        else if (v[y - 1] > v[x - 1])
            ans[y - 1]--;
    }
    for (int i=0; i<ans.size(); i++) cout << ans[i] << " ";
}

int main()
{
    int cases = 1;

    //cin >> cases;
    while (cases--)
        solve();
    return (0);
}