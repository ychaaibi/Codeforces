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
    int     s;
    int     k;
    
    cin >> s >> k;
    
    while (k)
    {
        if (s % 10 == 0)
        {
            s /= 10;
            k--;
        }
        else
        {
            int mn = min(k, s % 10);
            k -= mn;
            s -= mn;
        }
    }
    cout << s << endl;
}

int main()
{
    int cases = 1;

    //cin >> cases;
    while (cases--)
        solve();
    return (0);
}