# include   <vector>
# include   <algorithm>
# include   <iostream>
# include   <map>
# include   <unordered_map>
# include   <set>
# include   <unordered_set>
# include   <string>

# define    vi  vector<int>
# define    vs  vector<string>
# define    vvi vector<vector<int>>
# define    vvs vector<vector<string>>
# define    ll  long long
# define    ull unsigned long long
# define    lp(n) for (int i=0; i<n; i++)
# define    lp1(s, e, st) for (int i=s; i<e; i+=st)

using namespace std;

void    solve()
{
    int n, q;

    cin >> n >> q;
    vi  v(n);
    ull sum_even = 0;
    ull count_even = 0;
    ull sum_odd = 0;
    ull count_odd = 0;
    for (int i=0; i<n; i++)
    {
        cin >> v[i];
        sum_odd += (v[i] % 2) * v[i];
        count_odd += (v[i] % 2);
        count_even += !(v[i] % 2);
        sum_even += !(v[i] % 2) * v[i];
    }
    while (q--)
    {
        int type, val;

        cin >> type >> val;
        if (type % 2)
        {
            if (val % 2)
            {
                sum_even += (sum_odd + count_odd * val);
                sum_odd = 0;
                count_even = n;
                count_odd = 0;
            }
            else
                sum_odd += (count_odd * val);
        }
        else
        {
            if (val % 2)
            {
                sum_odd += (sum_even + count_even * val);
                sum_even = 0;
                count_odd = n;
                count_even = 0;
            }
            else
                sum_even += (count_even * val);
        }
        cout << sum_even + sum_odd << endl;
    }
}

int main()
{
    int cases = 1;

    cin >> cases;
    while (cases--)
        solve();
    return (0);
}