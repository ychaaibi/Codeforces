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

long long   dp( long long num, int pw, int mod)
{
    if ( pw == 0 )  return ( 1 );
    if ( pw == 1 )  return ( num );
    
    long long   ans = dp( num, pw / 2, mod );
    
    if ( pw % 2 == 0 )
        return ( ( ans * ans ) % mod );
    return  ( ( ( ( ans * ans ) % mod ) * num ) % mod );
}

long long   get(long long n)
{
    return ((n * (n - 1)) / 2);

}

// long long   get_inverse_prime( long long num, int m )
// {
//     return ( dp(num, m - 2) );
// }

// long long   get_inverse_unprimes( long long num, int n )
// {
    
// }
vector<bool>    is_primes( 101, true );
vector<ll>      primes;

vector<map<long, long> >    facts(10001);

void            get_primes()
{
    for ( int i=2; i<is_primes.size(); i++ )
    {
        if ( !is_primes[i] ) continue ;
        
        for ( int k=2; i * k < is_primes.size(); k++ ) is_primes[ i * k ] = false;
        primes.push_back( i );
    }
}

void    add_facts(long long num, map<long, long>& val)
{
    for ( int i=0; i<primes.size() and primes[i] <= num; i++ )
    {
        if ( num % primes[i] == 0 )
        {
            while ( num % primes[i] == 0 )
                val[primes[i]]++, num /= primes[i];
        }
    }
    if ( num != 1 )
        val[num]++;
}

void    remove_facts(long long num, map<long, long>& val)
{
    for ( auto& [p, c] : facts[num] )
    {
        if ( val.count( p ) == 0 ) continue;

        val[p] -= c;
    }
}

long long   ans_querie( map<long,long>& val, long long m )
{
    long long   ans = 1;

    for ( auto& [p, c] : val )
    {
        // cout << p << " " << c << endl;
        if ( c == 0 ) continue ;
        ans = ( ans * dp(p,c,m) ) % m;
    }
    // cout << endl;
    return ( ans % m );
}



// void    solve()
// {
//     int n, m;

//     cin >> n >> m;

//     vector<int> v(n);
//     map<long, long> val;

//     // for ( int i=0; i<n; i++ ) cin >> v[i];
//     // for ( int i=0; i<n; i++ ) add_facts(v[i], val);

//     // string  s;
//     // cin >> s;
//     // int p1 = 0, p2 = n - 1;

//     // cout << ans_querie(val, m) << " ";
//     // // cout << endl;

//     // for ( int i=0; i<s.length() - 1; i++ )
//     // {
//     //     if ( s[i] == 'L' )
//     //         remove_facts( v[p1++], val );
//     //     else
//     //         remove_facts( v[p2--], val );
//     //     cout << ans_querie( val, m ) << " ";
//     // }
//     // cout << endl;
// }

void    solve()
{
    int n;

    cin >> n;
    char    trump;

    cin >> trump;

    vector<string>  card( 2 * n);

    for ( int i=0; i<card.size(); i++ ) cin >> card[i];
    
    map<char, vector<string> >  mp;
    mp['C'] = mp['D'] = mp['H'] = mp['S'] = vector<string>();

    for ( int i=0; i<card.size(); i++ ) mp[card[i][1]].push_back( card[i] );
    
    int rest=0;

    for ( auto& [c, cn] : mp )
    {
        if ( c != trump ) rest += cn.size() % 2;
    }


    if ( mp[trump].size() < rest or (rest - mp[trump].size()) % 2){
        cout << "IMPOSSIBLE" << endl;
        return ;
    }

    for ( auto& [c, cn] : mp )
        sort(cn.begin(), cn.end());

    for ( auto& [c, cn] : mp )
    {
        if ( c == trump ) continue ;

        while ( cn.size() >= 2 )
        {
            cout << cn[cn.size() - 2] << " " << cn[cn.size() - 1] << endl;
            cn.pop_back();
            cn.pop_back();
        }
        if ( cn.size() )
        {
            cout << cn.back() << " " << mp[trump].back() << endl;
            cn.pop_back();
            mp[trump].pop_back();
        }
    }

    while ( mp[trump].size() )
    {
        cout << mp[trump][mp[trump].size() - 2] << " " << mp[trump][mp[trump].size() - 1] << endl;
        mp[trump].pop_back();
        mp[trump].pop_back();
    }
}


int main()
{
    int cases = 1;
    
    primes.reserve( 101 );
    get_primes();

    for ( int i=1; i<facts.size(); i++ )
    {
        add_facts( i, facts[i] );
    }

    cin >> cases;
    while (cases--)
        solve();
    return (0);
}
