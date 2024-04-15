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
    int     size;
    char    c;

    cin >> size >> c;
    string  s;

    cin >> s;
    if (c == 'g')
    {
        cout << 0 << endl;
        return ;

    }
    s += s;
    int found_g = true;
    int start = -1;
    int ans = -1;
    for (int i=0; i<s.length(); i++)
    {
        if (s[i] == c and found_g)
        {
            start = i;
            found_g = false;
        }
        else if (s[i] == 'g' and start != -1 and !found_g)
        {
            ans = max(ans, i - start);
            found_g = true;
        }
    }
    cout << ans << endl;
}

int main()
{
    int cases = 1;

    cin >> cases;
    while (cases--)
        solve();
    return (0);
}