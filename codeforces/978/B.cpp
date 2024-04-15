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
    string  s;
    int     n;
    int     c = 0;
    int     ans = 0;

    cin >> n >> s;
    for (int i=0; i<s.length(); i++)
    {
        if (s[i] == 'x')
            c++;
        else
        {
            ans += (c >= 3) * (c - 3 + 1);
            c = 0;
        }
    }
    ans += (c >= 3) * (c - 3 + 1);
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