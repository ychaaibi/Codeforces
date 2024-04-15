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
# define    string      str

//_____________Methods__________________//

# define    mp          make_pair 
# define    pb          push_back 
# define    pf          push_front
# define    f           first    
# define    s           second   

# define    srt(v)      sort(v.begin(), v.end())

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

bool    is_prime(ll n)
{
    if (n == 1) return (false);
    if (n == 2) return (true);
    if (n % 2 == 0)
        return (false);
    for (int i=3; i<=(ll)sqrt(n); i += 2)
        if (n % i == 0) return (false);
    return (true);
}

# define    M 998244353

int gcd(int a, int b) {
   if (b == 0)
   return a;
   return gcd(b, a % b);
}



void    solve()
{
    int n;

    cin >> n;
    vll v(n);
    
    for (int i=0; i<n; i++) cin >> v[i];
    int p1 = n - 1;
    int p2 = n - 1;
    int dif = 0;

    while (p1 >= 0)
    {
        if (v[p1] == 0)
        {
            p1--;
            dif--;
            continue ;
        }
        if (v[p1] % (p1 + 2 - dif))
        {
            v[p1] = 0;
            p1--;
        }
        else
        {
            p2 = p1 - 1;
            int dl = dif;
            while (p2 >= 0)
            {
                if (v[p2] == 0)
                    dl--;
                else if ((v[p2] and v[p2] % (p2 + 2)) or (v[p2] % (p2 + 2 - dl)))
                {
                    v[p2] = 0;
                    dif++;
                    break ;
                }
                p2--;
            }
            if (p2 < 0)
            {
                cout << "NO" << endl;
                return ;
            }
        }
    }

    if (p1 < 0) cout << "YES" << endl;
    else cout << "NO" << endl;

}

int main()
{
    int cases = 1;

    cin >> cases;
    while (cases--)
        solve();
    return (0);
}

