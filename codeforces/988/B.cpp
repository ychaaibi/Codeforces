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
# define    vps  vector<pair<int, string> >

using namespace std;

int is_substring(string s1, string s2)
{
    for (int i=0; i<s1.length() - s2.length() + 1; i++)
    {
        //cout << s1.substr(i, s2.length()) << " " << s2 << endl;
        if (s1.substr(i, s2.length()) == s2)
            return (1);
    }
    return (0);
}

void    solve()
{
    int n;

    cin >> n;
    vps  v(n);
    for (int i=0; i<n; i++)
    {
        cin >> v[i].second;
        v[i].first = v[i].second.length();
    }
    sort(v.begin(), v.end());
    for (int i=1; i<n; i++)    
    {
        if (!is_substring(v[i].second, v[i - 1].second))
        {
            cout << "NO" << endl;
            return ;
        }
    }
    cout << "YES" << endl;
    for (int i=0; i<n; i++) cout << v[i].second << endl;
}

int main()
{
    int cases = 1;

    //cin >> cases;
    while (cases--)
        solve();
    return (0);
}