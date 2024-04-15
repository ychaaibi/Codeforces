# include   <vector>
# include   <algorithm>
# include   <iostream>
# include   <map>
# include   <unordered_map>
# include   <set>
# include   <unordered_set>
# include   <string>
# include   <cstring>

# define    vi  vector<int>
# define    vs  vector<string>
# define    vvi vector<vector<int>>
# define    vvs vector<vector<string>>
# define    ll  long long
# define    ull unsigned long long
# define    lp(n) for (int i=0; i<n; i++)
# define    lp1(s, e, st) for (int i=s; i<e; i+=st)

# define    mp make_pair

using namespace std;

int tab[51];

void    solve()
{
    int n;

    cin >> n;
    vi      v(n);
    string  s;
    for (int i=0; i<n; i++) cin >> v[i];
    cin >> s;
    memset(tab, 0, sizeof(int) * 51);
    for (int i=0; i<n; i++)
    {
        if (!tab[v[i]])
            tab[v[i]] = s[i];
        else if (tab[v[i]] != s[i])
        {
            cout << "NO" << endl;
            return ;
        }
    }
    cout << "YES" << endl;
}

int main()
{
    int cases = 1;

    cin >> cases;
    while (cases--)
        solve();
    return (0);
}