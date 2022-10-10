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
    int     a, b, x, as, an;
    string  ans("");
    string  s;
    string  n;

    cin >> a >> b >> x;
    if (a > b)
    {
        s = string("0");
        n = string("1");
    }
    else
    {
        s = string("1");
        n = string("0");
    }
    as = max(a, b);
    an = min(a, b);
    ans += s;
    as--;
    while (x - 1)
    {
        ans += n;
        an--;
        x--;
        if (!(x - 1))
        {
            while (an--)
                ans += n;
            while (as--)
                ans += s;
            cout << ans << endl;
            return ;
        }
        ans += s;
        as--;
        x--;
    }
    while (as--)
        ans += s;
    while (an--)
        ans += n;
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