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
    string  a, b;

    cin >> a >> b;
    int a_i = a.length() - 1;
    int b_i = b.length() - 1;
    while (a_i >= 0 and b_i >= 0)
    {
        if (a[a_i] == b[b_i])
        {
            a_i--;
            b_i--;
        }
        else
            break ;
    }
    cout << (a_i + 1 + b_i + 1) << endl;
}

int main()
{
    int cases = 1;

    //cin >> cases;
    while (cases--)
        solve();
    return (0);
}