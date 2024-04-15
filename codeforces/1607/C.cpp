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

using namespace std;

void	solve()
{
	int			size;
	cin >> size;
	
	vi	vec(size);
	for (int i=0; i<size; i++){
		cin >> vec[i];
	}
	sort(all(vec));
	int	mx = vec[0];
	for (int i=1; i<size; i++) mx = max(vec[i] - vec[i - 1], mx);
	cout << mx << endl;

}

int main()
{
	int	cases;

	cin >> cases;
	while (cases--)
		solve();
	return (0);
}
