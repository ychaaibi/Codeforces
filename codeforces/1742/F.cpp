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
    unsigned long long  t1_len = 1;
    unsigned long long  t2_len = 1;
    int tb = false;
    int sb = false; 

    cin >> n;
    while (n--)
    {
        int d, k;
        string  s;

        cin >> d >> k >> s;
        if (tb)
        {
            cout << "YES" << endl;
            continue ;
        }
        if (d == 2)
        {
            t2_len += (unsigned long long)s.length() * (unsigned long long)k;
            for (int i=0; i < s.length(); i++)
            {
                if (s[i] != 'a')
                {
                    tb = true;
                    cout << "YES" << endl;
                    break ;
                }
            }
        }
        else
        {
            t1_len += (unsigned long long)s.length() * (unsigned long long)k;
            for (int i=0; i < s.length(); i++)
            {
                if (s[i] != 'a')
                {
                    sb = true;
                    break ;
                }
            }
        }
        if (sb and !tb)
            cout << "NO" << endl;
        else if (!tb)
        {
            if (t1_len >= t2_len)
                cout << "NO" << endl;
            else
                cout << "YES" << endl;
        }
    }
}

int main()
{
    int cases = 1;

    cin >> cases;
    while (cases--)
        solve();
    return (0);
} 