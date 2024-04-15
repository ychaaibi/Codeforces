//__________Includes__________________//
 
# include               <iostream>
# include               <algorithm>
# include               <vector>
# include               <string>
# include               <map>
# include               <unordered_map>
# include               <set>
# include               <unordered_set>
# include               <bitset>
# include               <queue>
# include               <stack>
# include               <complex>
# include               <cmath>
# include               <climits>
# include               <cstring>
 
//____________Containers_Define__________//
 
# define    vi          vector<int>
# define    vll         vector<long long>
# define    vull        vector<unsigned long long>
# define    vvi         vector<vector<int> >
# define    vvll        vector<vector<long long> >
# define    vvull       vector<vector<unsigned long long> >
# define    vs          vector<string>
# define    vvs         vector<vector<string> >
# define    vpi         vector<pair<int, int> >
# define    vvpi        vector<vector<pair<int, int> > >
# define    pii         pair<int, int>
# define    pis         pair<int, string>
# define    psi         pair<string, int>
# define    mpii        map<int, int>
# define    mpis        map<int, string>
# define    mpsi        map<string, int>
# define    mpiv        map<int, vector<int> >
# define    umpii       unordered_map<int, int>
# define    umpis       unordered_map<int, string>
# define    umpsi       unordered_map<string, int>
# define    umpiv       unordered_map<int, vector<int> >
 
//_____________Data_type________________//
 
# define    ll          long long
# define    ull         unsigned long long
# define    str         string
 
//_____________Methods__________________//
 
# define    mp          make_pair 
# define    pb          push_back 
# define    pf          push_front
# define    f           first    
# define    s           second   
 
using namespace std;
 
//______________Functions________________//
 
bool    isInt(double d)
{
    return ((double)(int)d - d == (double)0.00);
}
 
ull     fact(ull n)
{
    ull res = 1;
    
    while (n--) res *= (n + 1);
    return (res);
}
 
ull     C(ull n, ull k)
{
    vull    dpp(n + 1);
    vvull   dp(k + 1, dpp);
 
    for (int i=1; i<=n; i++) dp[1][i] = i;
    for (int i=2; i<=k; i++)
    {
        for (int j=1; j<=n; j++)
        {
            if (i > j)
                dp[i][j] = 0;
            else
                dp[i][j] = dp[i - 1][j - 1] + dp[i][j - 1];
        }
    }
    return (dp[k][n]);
}
 
vpi merge_intervals(vpi   intervals)
{
    pair<int, int>  v;
    vpi             ans;
    
    if (!intervals.size()) return (ans);
    sort(intervals.begin(), intervals.end());
    v.f = intervals[0].f;
    v.s = intervals[0].s;
    for (int i=1; i<intervals.size(); i++)
    {
        if (intervals[i].f > v.s)
        {
            ans.push_back(v);
            v.f = intervals[i].f;
            v.s = intervals[i].s;
        }
        else
        {
            v.f = min(v.f, intervals[i].f);
            v.s = max(v.s, intervals[i].s);
        }
    }
    ans.push_back(v);
    return (ans);
}

void    solve()
{
    int m, s;
    cin >> m >> s;

    if (s == 0 and m != 1){
        cout << "-1 -1" << endl;
        return ;
    }
    else if (s == 0)
    {
        cout << "0 0" << endl;
        return ;
    }
    str  ans_mx = string("1") + string(m - 1, '0');
    str  ans_mn = string("1") + string(m - 1, '0');
    int s_mx = s - 1;
    int s_mn = s - 1;
    int i = m - 1;
    while (s_mn and i >= 0)
    {
        ans_mn[i] = (((min(s_mn, 8) + 1) * !i) + (min(s_mn, 9) * !!i)) + 48;
        s_mn -= (((min(s_mn, 8)) * !i) + (min(s_mn, 9) * !!i));
        i--;
    }
    i = 0;
    while (s_mx and i < m)
    {
        ans_mx[i] = (((min(s_mx, 8) + 1) * !i) + (min(s_mx, 9) * !!i)) + 48;
        s_mx -= (((min(s_mx, 8)) * !i) + (min(s_mx, 9) * !!i));
        i++;
    }
    if (s_mx or s_mn) cout << "-1 -1" << endl;
    else cout << ans_mn << " " << ans_mx << endl;
}

int main()
{
    int cases = 1;
    
    //cin >> cases;
    while (cases--)
        solve();
    return (0);
}