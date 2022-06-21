#include <vector>
#include <cmath>
#include <algorithm>
#include <iostream>
#include <unordered_map>

using namespace std;

using ll = long long;
using db = double;
using str = string;

using pi = pair<int,int>;
using pl = pair<ll,ll>;
using pd = pair<db,db>;

using vi = vector<int>;
using vb = vector<bool>;
using vl = vector<ll>;
using vd = vector<db>;
using vs = vector<str>;
using vpi = vector<pi>;
using vpl = vector<pl>;
using vpd = vector<pd>;

#define tcT template<class T
#define tcTU tcT, class U
tcT> using V = vector<T>;
tcT, size_t SZ> using AR = array<T,SZ>;
tcT> using PR = pair<T,T>;
// pairs
// #define mp make_pair
#define f first
#define s second

// vectors
// size(x), rbegin(x), rend(x) need C++17
#define sz(x) int((x).size())
#define bg(x) begin(x)
#define all(x) bg(x), end(x)
#define rall(x) x.rbegin(), x.rend()
#define sor(x) sort(all(x))
#define rsz resize
#define ins insert
#define ft front()
#define bk back()
#define pb push_back
#define eb emplace_back
#define pf push_front
// #define rtn return

#define lb lower_bound
#define ub upper_bound

/* Some Codes Skipped */

// loops
#define FOR(i,a,b) for (int (i) = (a); (i) < (b); ++(i))
#define REP(i,a) FOR(i,0,a)
#define ROF(i,a,b) for (int (i) = (b)-1; (i) >= (a); --(i))
#define PER(i,a) ROF(i,0,a)
#define rep(a) REP(_,a)
#define each(a,x) for (auto& a: x)

#define RIGHT 0
#define LEFT 1
void	solve()
{
	long long x0, n, dir;

	cin >> x0 >> n;
	if (!n)
		cout << x0 << endl;
	else if (n == 1)
		cout << x0 + (1 * ((x0 % 2) ? 1 : -1)) << endl;
	else if (n == 2)
		cout << x0 + (1 * ((x0 % 2) ? 1 : -1)) + 2 * (!(x0 % 2) ? 1 : -1) << endl;

	if (n <= 2)
		return ;

	if (x0 % 2)
		x0++;
	else
		x0--;

	n--;

	dir = (x0 % 2 ? RIGHT : LEFT);

	if (n % 2)
	{
		if ((n / 2) % 2)
		{
			if (x0 % 2)
				x0 -= (n + 1);
			else
				x0 += (n + 1);
		}
		else
		{
			if (x0 % 2)
				x0 += (n + 1);
			else
				x0 -= (n + 1);
		}
		n--;
	}
	//cout << x0 << endl;
	n = n / 2;
	if (n % 2)
	{
		long long	s = (n / 2);

		if (dir == LEFT)
			x0 += - (s + 1) * (5 + 4 * s) + s * (9 + 4 * (s - 1));
		else
			x0 += (s + 1) * (5 + 4 * s) - s * (9 + 4 * (s - 1));
	}
	else
	{
		long long	s = (n / 2);

		if (dir == LEFT)
			x0 += - s * (5 + 4 * (s - 1)) + s * (9 + 4 * (s - 1));
		else
			x0 += s * (5 + 4 * (s - 1)) - s * (9 + 4 * (s - 1));
	}
	cout << x0 << endl;
	
}

int main()
{
	int	cases;

	cin >> cases;
	while (cases--)
		solve();
	return (0);
}
