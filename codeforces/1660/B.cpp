//#define Print 1
#include <iostream>
#include <complex>
#include <iomanip>
#include <algorithm>
#include <queue>
#include <stack>
#include <string>
#include <vector>
#include <cmath>
#include <map>
#include <set>
#include <string.h>
#include <stdlib.h>
#include <assert.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<pair <int,int> > vpi;
typedef vector<long long> vll;
typedef pair<int,int> pi;
typedef pair<ll,ll> pll;
#ifdef Print
    #define trace(x) cerr<<__FUNCTION__<<":"<<__LINE__<<": "#x" = "<<x<<endl;
#else
    #define trace(x);
#endif
#define F first
#define ln '\n'
#define S second
#define PB push_back
#define MP make_pair
#define B begin()
#define RB rbegin()
#define E end()
#define RE rend()
#define Z size()
#define REP(i,a,b) for (int i = a; i < b; i++)
#define L length()
#define show(a) cerr << " *** " << a << endl;
#define show1(a) cerr << " /// " << a << endl;
#define valid(a,b,c) (a >= b && a < c ? 1 : 0)
int dx[4] = {0,0,1,-1};
int dy[4] = {1,-1,0,0};
const int mod = (int)1e9 + 7;

int main()
{

    int testcases;
    int i = 0;

    cin >> testcases;
    while (testcases--)
    {
        int size;

        cin >> size;
        vi search(size);
        int j = 0;
        while (j < size)
        {
            int candy;

            cin >> candy;
            search[j++] = candy;
        }
        sort(search.begin(), search.end());
        if (size > 1 && search[size - 1] - search[size - 2] <= 1)
            cout << "YES" << endl;
        else if (size == 1 && search[0] <= 1)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return (0);
}