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

void    check(string s1, string s2)
{
    if (s1[s1.length() - 1] == 'M' and s2[s2.length() - 1] == 'S')
        cout << ">" << endl;
    else if (s1[s1.length() - 1] == 'S' and s2[s2.length() - 1] == 'M')
        cout << "<" << endl;
    else if (s1[s1.length() - 1] == 'L' and (s2[s2.length() - 1] == 'M' or s2[s2.length() - 1] == 'S'))
        cout << ">" << endl;
    else if ((s1[s1.length() - 1] == 'M' or s1[s1.length() - 1] == 'S') and s2[s2.length() - 1] == 'L')
        cout << "<" << endl;
    else if (s1.length() == s2.length())
        cout << "=" << endl;
    else if (s1[s1.length() - 1] == 'S')
    {
        if (s1.length() > s2.length())
            cout << "<" << endl;
        else
            cout << ">" << endl;
    }
    else
    {
        if (s1.length() > s2.length())
            cout << ">" << endl;
        else
            cout << "<" << endl;
   }
}

void    solve()
{
    int n;
    string  s1;
    string  s2;

    cin >> n;
    while (n--)
    {
        cin >> s1 >> s2;
        check(s1, s2);
    }
}

int main()
{
    int cases = 1;

    //cin >> cases;
    while (cases--)
        solve();
    return (0);
}