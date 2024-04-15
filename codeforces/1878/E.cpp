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
 
//_____________Methods__________________//
 
# define    mp          make_pair 
# define    pb          push_back 
# define    pf          push_front
# define    f           first    
# define    s           second   
 
# define    srt(v)      sort(v.begin(), v.end())
# define    ub(v, trg)  upper_bound(v.begin(), v.end(), trg)
# define    lb(v, trg)  lower_bound(v.begin(), v.end(), trg)
 
using namespace std;
 
//______________Functions________________//
 
bool    isInt(double d)
{
    return ((double)(int)d - d == (double)0.00);
}
 
// ull     fact(ull n)
// {
//     ull res = 1;
    
//     while (n--) res *= (n + 1);
//     return (res);
// }
 
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
# define MOD 1000000007LL
 
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
 
 
ull gcd(ull a, ull b) {
   if (b == 0)
   return a;
   return gcd(b, a % b);
}

ull     lcm(ull a, ull b)
{
        return ((a * b) / gcd(a, b));
}

ll     get_pairs(int nm, vll& v)
{
    ll  ans = 0;
    for (ll dv=1; dv <= sqrt(nm); dv++)
    {
        if (nm / dv == dv) continue ;
        if (nm % dv == 0)
        {
            if (v[nm / dv] == -1 or v[dv] == -1) continue ;
            if (v[nm / dv] + v[dv] == nm) ans++;
        }
    }
    return (ans);
}


ll      sum_suite_ari(ll a0, ll an, ll n)
{
        return ((n * (a0 + an)) / 2);
}

ll      suite(ll t0, ll tn)
{
        ll      n = (tn - t0 + 1);

        return ((n * (2 * t0 + (n - 1))) / 2);
}

#include <fstream>

std::ofstream   out;
std::ifstream   in;

void    open_files(const char* input, const char* output)
{

        in.open(input);
        out.open(output);
}

long long   get(long long n)
{
    return ((n * (n - 1)) / 2);

}


// void    solve()
// {
//     int n, k;

//     cin >> n >> k;

//     string  s;
//     cin >> s;

//     vector<int> l(k), r(k);

//     for (int i=0; i<k; i++) cin >> l[i];
//     for (int i=0; i<k; i++) cin >> r[i];

//     int     q;
    
//     cin >> q;
//     vector<int> que(q);

//     for (int i=0; i<q; i++) cin >> que[i];
// }

int bs(vector<vector<int>>& bits, int b, int l, int e)
{
    int s = l;
    while (s < e)
    {
        int md = (s + e) / 2;

        if (((bits[md][b] - (l ? bits[l - 1][b] : 0)) == md - l + 1)
            and ((md + 1 < bits.size() and (bits[md + 1][b] - (l ? bits[l - 1][b] : 0)) != md - l + 2) or (md + 1) == bits.size()))
            return (md);
        else if (((bits[md][b] - (l ? bits[l - 1][b] : 0)) == md - l + 1)) s = md + 1;
        else e = md;
    }
    return (s);
}

int answer(int l, ll k, vector<vector<int>>& bits)
{
    int ans = bits.size() - 1;
    int mx = -1;
    for (int b=32; b>=0; b--)
    {
        // cout << ans << " " << mx << " " << ((k >> b) & 1) << " " << ans - l + 1 << endl;
        if (!((k >> b) & 1) and ((bits[ans][b] - (l ? bits[l - 1][b] : 0)) == ans - l + 1))
        {
            // cout <<  b << " ech " << bits[ans][b] << endl;
            return (max(mx, ans));
        }
        else if (!((k >> b) & 1))
        {
            mx = max(mx, min(bs(bits, b, l, bits.size()), ans));
            continue ;
        }
        else if (((bits[ans][b] - (l ? bits[l - 1][b] : 0)) == ans - l + 1)) continue ;

        ans = bs(bits, b, l, ans + 1);
        // cout << ans << " " << b << " " << mx << endl;
    }
    return (max(ans, mx));
}

// 1
// 5
// 15 14 17 42 34
// 1
// 1 7

void    solve()
{
    int n;

    cin >> n;
    vector<ll>  v(n);

    for (int i=0; i<n; i++) cin >> v[i];

    int q;

    cin >> q;
    vector<vector<int>> bits(n,vector<int>(33,0));

    for (int i=0; i<n; i++)
    {
        if (i) bits[i] = bits[i - 1];
        for (int k=0; k<33; k++)
        {
            // cout << "(" << v[i] << " " << ((v[i] >> k) & 1) << "); ";
            bits[i][k] += ((v[i] >> k) & 1);
            // cout << bits[i][k] << " ";
        }
        // cout << endl;
    }

    while (q--)
    {
        ll k, l;

        cin >> l >> k;

        if (v[l - 1] < k) cout << -1 << " ";
        else cout << answer(l - 1, k, bits) + 1 << " "; 
    }
    cout << endl;
}

int main()
{
    int cases = 1;
    
    cin >> cases;
    while (cases--)
        solve();
    return (0);
}

// 4 = 2 * 2
// 8 = 2 * 2 * 2

// 15 = 3 * 5
// 16 = 2 * 2 * 2 * 2

// 23 = 23
// 42 = 4 * 2 * 3
// 1 2
// 2 3
// 3 4
// 4 5

// .
// . .
// . . .
// . . . .
// . . . . .

// .
// . 
// . 
// . . . . .
// . . . . .
// . . . . .

// .
// .
// . . .
// . . .
// . . . . .

// column[0] = 5;

// p1 = 5, p1 = (()

// 1000000000000000000 