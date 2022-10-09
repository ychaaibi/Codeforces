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
# define    vpi vector<pair<int, int> >

using namespace std;

void    solve()
{
    int n, k;

    cin >> n >> k;
    vpi  v(n);
    vi  ans;
    for (int i=0; i<n; i++)
    {
        cin >> v[i].first;
        v[i].second = i + 1;
    }
    sort(v.begin(), v.end());
    int count = 1;
    ans.push_back(v[0].second);
    for (int i=1; i<n; i++)
    {
        if (v[i].first != v[i - 1].first)
        {
            ans.push_back(v[i].second);
            count++;
        }
    }
    if (count < k)
    {
        cout << "NO" << endl;
        return ;
    }
    cout << "YES" << endl;
    for (int i=0; i<k; i++) cout << ans[i] << " ";

}

int main()
{
    int cases = 1;

    //cin >> cases;
    while (cases--)
        solve();
    return (0);
}