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

bool    cmp(pair<ll,int> fr, pair<ll,int> sn)
{
    if (fr.f != sn.f) return (fr.f > sn.f);
    return (fr.s < sn.s);
}

// long long   get_score(vector<int>& v, vector<int>& v_end, char c)
// {
//     long long   score = 0;
//     for (int i=0; i<=c; i++) score += v[i] * pow(10,i);
//     for (int i=c + 1; i<5; i++)
//         if (v_end[i] > v[i]) return (score);
//     return (score - pow(10, c - 'A'));
// }

// int         sign(vector<int>& suff, char c)
// {
//     for (int k=c - 'A' + 1; k<5; k++)
//     {
//         if (suff[k]) return (-1);
//     }
//     return (1);
// }

// long long   score(char c, int count)
// {
//     return ((long long)pow(10, c - 'A') * count);
// }

// void    solve()
// {
//     string                  s;
//     int                     n;

//     cin >> s;
//     n = s.length();

//     vector<vector<int> >    pref_alpha(s.length() + 2, vector<int>(5,0));
//     vector<vector<int> >    suff_alpha(pref_alpha);

//     pref_alpha[1][s[0] - 'A'] = 1;
//     for (int i=2; i<=n; i++)
//     {
//         pref_alpha[i] = pref_alpha[i - 1];
//         for (int k=0; k<s[i - 1] - 'A'; k++) pref_alpha[i][k] = 0;
//         pref_alpha[i][s[i - 1] - 'A']++;
//     }

//     pref_alpha[n][s[n - 1] - 'A'] = 1;
//     for (int i=n - 1; i>=1; i--)
//     {
//         suff_alpha[i] = suff_alpha[i + 1];
//         suff_alpha[i][s[i] - 'A']++;
//     }
    
//     long long   ans = 0;

//     for (int i=0; i<5; i++) ans += score(i + 'A', pref_alpha[n][i]);
//     cout << ans << endl;
    // for (int i=1; i<=n; i++)
    // { 
    //     for (int j=0; j<5; j++)
    //     {
    //         long long   new_score = ans + score(s[i - 1], 1) * sign(suff_alpha[i + 1], s[i - 1]);

    //         for (int k=j + 1; k<5; k++)
    //         {
    //             bool    added = false;

    //             if (!pref_alpha[i - 1][k]) continue ;
    //             for (int c=k + 1; c < 5; c++)
    //             {
    //                 if (pref_)
    //             }
    //         }
    //     }
    // }
// }


long long   get(long long n)
{
    return ((n * (n - 1)) / 2);

}

vector<ull> fact;

void    solve()
{
    string  s;

    ull     mod = 998244353;

    // std::cout << mod << endl;
    cin >> s;
    // std::cout << s.length() << std::endl;
    ull     ans = 1;
    ull     ops = 0;
    int     c = 1;
    for (int i=1; i<s.length(); i++)
    {
        if (s[i] != s[i - 1])
        {
            if (c != 1)
            {
                ops += (c - 1);
                ans = (ans * c) % mod;
                c = 1;
            }
        }
        else
            c++;
    }
    if (c != 1)
    {
        ops += (c - 1);
        ans = (ans * c) % mod;
    }
    ans = (ans * fact[ops]) % mod;
    cout << ops << " " << ans << endl;

}

int main()
{
    int cases = 1;
    
    ull     mod = 998244353;

    cin >> cases;
    fact.resize(200001);

    fact[0] = fact[1] = 1;

    for (ull i=2; i<fact.size(); i++)
    {
        fact[i] = (i * fact[i - 1]) % mod;
    }
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

// p1 = 5, p1 = 

// 1000000000000000000