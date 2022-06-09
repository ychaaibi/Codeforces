#include <algorithm>
#include <iostream>
#include <cmath>
#include <vector>

using namespace	std;

void	solve(vector<int> arr, int k)
{
	vector<int>::iterator	last, first;
	int	i = 0;
	int	l, r, l_max, r_max;
	int	occ;
	int m = -1;

	sort(arr.begin(), arr.end());
	while (i < arr.size())
	{
		first = lower_bound(arr.begin(), arr.end(), arr[i]);
		last = upper_bound(arr.begin(), arr.end(), arr[i]);
		occ = last - first;
		if (occ >= k)
		{
			m = 0;
			l = arr[i];
			l_max = arr[i];
			r = arr[i];
			r_max = arr[i];
			i += occ;
			break ;
		}
		i += occ;
	}

	if (m == -1)
	{
		cout << -1 << endl;
		return ;
	}
	i = 0;
	while (i < arr.size())
	{
		if (arr[i] - r > 1)
		{
			if (r - l > m)
			{
				l_max = l;
				r_max = r;
				m = r - l;
			}
			l = arr[i];
			r = arr[i];
			continue ; 
		}
		first = lower_bound(arr.begin(), arr.end(), arr[i]);
		last = upper_bound(arr.begin(), arr.end(), arr[i]);
		occ = last - first;
		if (last - first < k)
		{
			if (r - l > m)
			{
				l_max = l;
				r_max = r;
				m = r - l;
			}
			l = arr[i + occ];
			r = arr[i + occ];
		}
		else
			r = arr[i];
		i += occ;
	}
	if (m != -1)
	{
		//cout << r << "|" << l << endl;
		if (r - l > m)
		{
			l_max = l;
			r_max = r;
		}
		cout << l_max << " " << r_max << endl;
	}
	else
		cout << -1 << endl;
}

int main()
{
	int			cases;
	int			size, k, val;
	vector<int>	arr;

	cin >> cases;
	while (cases--)
	{
		cin >> size >> k;
		while (size--)
		{
			cin >> val;
			arr.push_back(val);
		}
		solve(arr, k);
		arr.clear();
	}
	return (0);
}