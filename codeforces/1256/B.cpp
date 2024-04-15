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
    vi  v(n);
    for (int i=0; i<n; i++) cin >> v[i];
    int min_index = 0;
    int s = 0;

    while (s < n - 1)
    {
        min_index = min_element(v.begin() + s, v.end()) - v.begin();
        if (min_index == s)
        {
            s++;
            continue ;
        }
        int ans = v[min_index];
        for (int i=min_index; i>s; i--) v[i] = v[i - 1];
        v[s] = ans;
        s = min_index;
    }
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