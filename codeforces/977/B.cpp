# include   <vector>
# include   <algorithm>
# include   <iostream>
# include   <map>
# include   <unordered_map>
# include   <set>
# include   <unordered_set>
# include   <cstring>
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
    int     tab[26][26];
    int     n;
    int     mx = -1;
    string  s;
    string  gram("..");

    cin >> n >> s;
    for (int i=0; i<26; i++) memset(tab[i], 0, sizeof(int) * 26);
    for (int i=1; i<s.length(); i++)
    {
        tab[s[i - 1] - 'A'][s[i] - 'A']++;
        if (mx < tab[s[i - 1] - 'A'][s[i] - 'A'])
        {
            mx = max(tab[s[i - 1] - 'A'][s[i] - 'A'], mx);
            gram[0] = s[i - 1];
            gram[1] = s[i];
        }
    }
    cout << gram << endl;
}

int main()
{
    int cases = 1;

    //cin >> cases;
    while (cases--)
        solve();
    return (0);
}