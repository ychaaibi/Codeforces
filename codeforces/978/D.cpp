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

void    solve()
{
    int n;
    int ans = INT_MAX;
    cin >> n;
    vi  v(n);
    for (int i=0; i<n; i++) cin >> v[i];
    if (n <= 2)
    {
        cout << 0 << endl;
        return ;
    }
    for (int i=-1; i<=1; i++)
    {
        int cnt = (i != 0);
        v[0] += i;
        for (int j=-1; j<=1; j++)
        {
            int count = cnt + (j != 0);
            int c = 0;
            //cout << "j : " << j << endl;
            v[1] += j;

            int r = v[1] - v[0];
            //cout << v[0] << " " << v[1] << " " << r << endl;
            for (int k=2; k<n; k++)
            {
                if (v[k] - (v[k - 1] - c) == r)
                    c = 0;
                else
                {
                    //cout << "k : " << k << endl;
                    int diff = (v[k] - (v[k - 1] - c)) - r;
                    if (abs(diff) > 1)
                        break ;
                    c = diff;
                    //cout << "diff : " << diff << endl;
                    count++;
                }
                if (k == n - 1)
                {
                    //cout << i << " " << j << " " << count << endl;
                    ans = min(count, ans);
                }
            }
            v[1] -= j;
        }
        v[0] -= i;
    }
    if (ans == INT_MAX)
        ans = -1;
    cout << ans << endl;
}

int main()
{
    int cases = 1;

    //cin >> cases;
    while (cases--)
        solve();
    return (0);
}