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

using namespace std;

void    solve()
{
    int n, k;
    string  s;

    cin >> n >> k >> s;
    for (int i=0; i<=26; i++)
    {
        for (int j=0; j<n; j++)
        {
            if (s[j] == 'a' + i)
            {
                s[j] = -1;
                k--;
                if (!k)
                {
                    i = 27;
                    break ;
                }
            }
        }
    }
    for (int i=0; i<n; i++)
    {
        if (s[i] != -1)
            cout << s[i];
    }
    cout << endl;
}

int main()
{
    int cases = 1;

    //cin >> cases;
    while (cases--)
        solve();
    return (0);
}