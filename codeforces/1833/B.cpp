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
 
 
ll  gcd(ll a, ll b) {
   if (b == 0)
   return a;
   return gcd(b, a % b);
}

ll  lcm(ll a, ll b)
{
    return ((a / gcd(a, b)) * b);
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

vector<bool>    primes(1e5, true);
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
    prims.reserve(100000);
    for (ll i=2; i<=primes.size(); i++)
    {
        if (!primes[i]) continue ;
        prims.pb(i);
        for (int k=2; i * k<=(ll)primes.size(); k++)
            primes[i * k] = false;
    }
}



#define MD 1000000007
string get_dir(int n, int m, int i1, int i2, string prev_dir)
{
    if (i1 == 0 and i2 == 0)
        return ("DR");
    else if (i1 == n - 1 and i2 == m - 1)
        return ("UL");
    else if (i1 == n - 1 and i2 == 0)
        return ("UR");
    else if (i1 == 0 and i2 == m - 1)
        return ("DL");
    else if (i1 == 0 or i1 == n - 1)
    {
        //cout << "what" << endl;
        return (((prev_dir[0] == 'D') ? "U" : "D") + string(1, prev_dir[1]));
    }
    else
        return (string(1, prev_dir[0]) + ((prev_dir[1] == 'L') ? "R" : "L"));
}

// void    solve()
// {
//     string _s;

//     cin >> _s;

//     int i = _s.length() - 1;

//     ull ans = 0;
//     while (i >= 0 and _s[i] == '1') i--;
//     ull cost = 1000000000000;
//     while (i >= 0)
//     {
//         int c_zero = 0;
//         int c_one = 0;
//         while (i >= 0 and _s[i] == '0')
//         {
//             c_zero++;
//             i--;
//         }
//         while (i >= 0 and _s[i] == '1')
//         {
//             c_one++;
//             i--;
//         }
//         //cout << i << " " << c_zero << " " << c_one << endl;
//         if (!c_one) break ;
//         if (c_zero == 1 and c_one == 1)
//         {
//             _s[i + 1] = '0';
//             _s[i + 2] = '1';
//             i++;
//             ans += cost;
//         }
//         else
//         {
//             ans += min(c_zero, c_one) * (cost + 1);
//         }
//     }
//     cout << ans << endl;
// }


void    fill_in(map<ll, pair<int, int> >& divs, ll val_a, ll val_b)
{
    divs.clear();
    for (int i=0; i<prims.size(); i++)
    {
        int count = 0;
        if (val_a % prims[i] and val_b % prims[i]) continue ;
        // cout << "here " << prims[i] << endl;
        while (val_b % prims[i] == 0)
        {
            val_b /= prims[i];
            count++;
        }
        divs[prims[i]] = make_pair(count, count);
        divs[prims[i]].f = count;
        count = 0;
        while (val_a % prims[i] == 0)
        {
            val_a /= prims[i];
            count++;
        }
        divs[prims[i]].s += count;
    }
    if (val_b != 1)
        divs[val_b] = make_pair(1, 1);
    if (val_a != 1)
    {
        if (val_a == val_b)
            divs[val_b].s++;
        else
            divs[val_a] = make_pair(0, 1);
    }
}

void    solve()
{
    int n;
    int k;
    cin >> n >> k;
    vector<pair<long long, int> > a(n), b(n);
    vector<int> ans(n);

    for (int i=0; i<n; i++)
    {
        cin >> a[i].f;
        a[i].s = i;
    }
    for (int i=0; i<n; i++)
    {
        cin >> b[i].f;
        b[i].s = i;
    }
    srt(a);
    srt(b);
    for (int i=0; i<n; i++)
        ans[a[i].s] = b[i].f;
    for (int i=0; i<n; i++) cout << ans[i] << " ";
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



//sqrt(n);


// (5,(1,1)), (2, (0,2)), (3, (0,1)), ((37, (1,0)))
   
