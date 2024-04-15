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
# define    vpi vector<pair<int, int> >
# define    ll  long long
# define    ull unsigned long long

using namespace std;

void    solve()
{
    int n, k;

    cin >> n >> k;
    vpi  v(n);
    vi  ans;

    for (int i=0; i<n; i++)
    {
        int val;

        cin >> val;
        v[i] = make_pair(val, i);
    }
    sort(v.begin(), v.end());
    int count = 1;
    ans.push_back(v[0].second + 1);
    for (int i=1; i<v.size(); i++)
    {
        if (v[i].first != v[i - 1].first)
            ans.push_back(v[i].second + 1);
        if (ans.size() == k)
            break ;
    }
    if (ans.size() < k)
    {
        cout << "NO" << endl;
        return ;
    }
    else
    {
        cout << "YES" << endl;
        for (int i=0; i<ans.size(); i++) cout << ans[i] << " ";
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