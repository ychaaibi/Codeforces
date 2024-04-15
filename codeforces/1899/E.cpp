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
 
 
int gcd(int a, int b) {
   if (b == 0)
   return a;
   return gcd(b, a % b);
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

vector<bool>    primes((ll)1e6 + 1, true);
vector<ll>     prims;

// void    fill_primes()
// {
//     primes[1] = false;
//     int count = 0;
//     for (ll i=2; i<=100000; i++)
//     {
//         if (!primes[i]) continue ;
//         count++;
//         for (int k=2; i * k<=100000; k++)
//             primes[i * k] = false;
//     }
    
//     prims.resize(count);
//     for (int i=1,k=0; i<=100000; i++)
//         if (primes[i]) prims[k++] = i;
// }

void    fill_primes_1()
{
    prims.reserve(31622);
    for (ll i=2; i<=(ll)31622; i++)
    {
        if (!primes[i]) continue ;
        prims.pb(i);
        for (int k=2; i * k<=(ll)31622; k++)
            primes[i * k] = false;
    }
}

void    solve()
{
    int n;

    cin >> n;

    vector<int> v(n);

    for (int i=0; i<n; i++) cin >> v[i];
    
    int i = 0;

    for (i=n - 2; i>=0; i--)
    {
        if (v[i] > v[i + 1]) break ;
    }
    if (i == -1)
    {
        cout << 0 << endl;
        return ;
    }
    for (int j=i - 1; j >= 0; j--)
    {
        if (v[j] <= v[i + 1])
        {
            cout << -1 << endl;
            return ;
        }
    }
    cout << i + 1 << endl; 
}


int main()
{
    int cases = 1;

    cin >> cases;
    while (cases--)
        solve();
    return (0);
}



// a * 2 ^ b = b * 2 ^ a

// a / b = 2 ^ (a - b)

// bi ^ bj = bj ^ bi

// (2 ^ (ai * bj)) = 2 ^ (aj * bi)

// ai * 2 ^ aj = aj * 2 ^ ai

// ai / aj = 2 ^ (ai - aj)



















// 2 ^ (a - b) = 2 ^ (2 ^ a - 2 ^ b)

// a - b = 2 ^ a - 2 ^ b

// a - 2 ^ a = b - 2 ^ b

// 12.6

// 1100.01001001
// 0.6 * 2 = 1.2 -> 0.2 * 2 

// operator<< (string s)
// operator<< (int a)
// operator<< (float a)

// operator<< (Fixed a)

// std::ostream& operator<<(std::ostream& stream,
//                      const Math::Matrix& matrix) {
//     matrix.print(stream); // Assuming you define print for matrix
//     return stream;
//  }

// type  op type


// 5 2 4 2

// 2 4 2 5

