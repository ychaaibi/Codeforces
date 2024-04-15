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
    int n, k;
    
    cin >> n >> k;
    vi  v(n);
    for (int i=0; i<n; i++) cin >> v[i];
    int p1 = 0, p2 = n - 1;
    int count = 0;
    while (p1 <= p2)
    {
        if (v[p1] <= k and ++count)
            p1++;
        else if (v[p2] <= k and ++count)
            p2--;
        else
        {
            cout << count << endl;
            return ;
        }
    }
    cout << n << endl;

}

int main()
{
    int cases = 1;

    //cin >> cases;
    while (cases--)
        solve();
    return (0);
}