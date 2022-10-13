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
# define    vll vector<long long>
# define    ll  long long
# define    ull unsigned long long
# define    lp(n) for (int i=0; i<n; i++)
# define    lp1(s, e, st) for (int i=s; i<e; i+=st)

using namespace std;

void    solve()
{
    int n, q;
    
    cin >> n >> q;

    vi          v(n);
    vpi         vq(q);
    vll          ans(q, -1);

    for (int i=0; i<n; i++)
        cin >> v[i];
    for (int i=0; i<q; i++)
    {
        int val;

        cin >> val;
        vq[i] = (make_pair(val, i));
    }
    sort(vq.begin(), vq.end());
    int p1 = 0, p2 = 0;
    ll sum = 0;
    while (p1 < v.size() and p2 < vq.size())
    {
        while (p1 < v.size() and vq[p2].first >= v[p1])
            sum += v[p1++];
        ans[vq[p2].second] = sum;
        p2++;
    }
    while (p2 < vq.size())
        ans[vq[p2++].second] = sum;
    for (int i=0; i<q; i++) cout << ans[i] << " ";
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