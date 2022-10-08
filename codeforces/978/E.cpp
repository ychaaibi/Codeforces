# include   <vector>
# include   <algorithm>
# include   <iostream>
# include   <map>
# include   <unordered_map>
# include   <set>
# include   <unordered_set>
# include   <string>

# define    vi  vector<int>
# define    vll vector<long long>
# define    vs  vector<string>
# define    vvi vector<vector<int>>
# define    vvs vector<vector<string>>
# define    ll  long long
# define    ull unsigned long long

using namespace std;

void    solve()
{ 
    int n, w;

    cin >> n >> w;
    pair<ll, ll>  ans;
    pair<ll, ll>  follow;

    vll  s(n);
    for (int i=0; i<s.size(); i++) cin >> s[i];
    ans.first = abs(min((long long)0, s[0]));
    ans.second = w - max((long long)0, s[0]);
    follow = make_pair(ans.first, ans.second);
    for (int i=0; i<s.size(); i++)
    {
        follow.first += s[i];
        follow.second += s[i];
        if (follow.first < 0)
        {
            ans.first += abs(follow.first);
            follow.first = 0;
        }
        if (follow.second > w)
        {
            ans.second -= (follow.second - w);
            follow.second = w;
        }
    }
    if (ans.first > ans.second or ans.second < 0 or ans.first < 0)
    {
        cout << 0 << endl;
        return ;
    }
    cout << (ans.second - ans.first) + 1 << endl;
}

int main()
{
    int cases = 1;

    //cin >> cases;
    while (cases--)
        solve();
    return (0);
}