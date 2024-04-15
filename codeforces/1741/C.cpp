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
	int	ans = INT_MAX;
	int	n;

	cin >> n;
	vi	v(n);
	for (int i=0; i<n; i++) cin >> v[i];
	int	sum = 0;
	for (int i=0; i<n; i++)
	{
		sum += v[i];
		//cout << sum << endl;
		int	sm = 0;
		int	length = i + 1;
		int	s = i + 1;
		for (int j=i + 1; j<n; j++)
		{
			sm += v[j];
			if (sm > sum)
			{
				length = -1;
				break ;
			}
			else if (sm == sum)
			{
				sm = 0;
				length = max(length, j - s + 1);
				s = j + 1;
			}
		}
		if (length != -1 and !sm)
			ans = min(length, ans);
	}
	cout << ans << endl;
}

int main()
{
    int cases = 1;

    cin >> cases;
    while (cases--)
        solve();
    return (0);
}