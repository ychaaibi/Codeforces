/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychaaibi <[email protected]>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 09:49:26 by ychaaibi          #+#    #+#             */
/*   Updated: 2023/01/09 10:15:31 by ychaaibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

ull  sum_n2(ull n)
{
    ull  ans = 0;
    ull num1 = (n + 1), num2 = (2 * n + 1), num3 = n;
    bool    d_3 = false;

    if (num1 % 2)
        num3 /= 2;
    else
        num1 /= 2;

    if (num1 % 3 == 0)
        num1 /= 3;
    else if (num2 % 3 == 0)
        num2 /= 3;
    else
        num3 /= 3;
    
    return ((((num1 * num2) % MOD) * (num3)) % MOD);
}

ull  sum_n1(ull n)
{
    return (((n * (n + 1)) / 2) % MOD);
}

void    solve()
{
    ll  a, b, c, d;

    cin >> a >> b >> c >> d;

    //cout << a << " " << b << " " << c << " " << d << endl;
    if (a * d == b * c)
    {
        cout << 0 << endl;
        return ;
    }
    if (!c or !a)
    {
        cout << 1 << endl;
        return ;
    }
    if ((a * d) % (b * c) == 0 or (b * c) % (a * d) == 0)
        cout << 1 << endl;
    else
        cout << 2 << endl;
}



int main()
{
    int cases = 1;

    cin >> cases;
    while (cases--)
        solve();
    return (0);
}