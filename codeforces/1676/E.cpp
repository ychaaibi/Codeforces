#include <algorithm>
#include <iostream>
#include <cmath>
#include <vector>

using namespace	std;

void	solve(vector<int> candies, int size_queries)
{
	int						query;
	int						i = 0;
	vector<int>::iterator	low;

	sort(candies.begin(), candies.end(), greater<int>());
	while (++i < candies.size())
		candies[i] += candies[i - 1];
	while (size_queries--)
	{
		cin >> query;
		low = lower_bound(candies.begin(), candies.end(), query);
		if (low - candies.begin() == candies.size())
			cout << -1 << endl;
		else
			cout << low - candies.begin() + 1 << endl;
	}
}

int main()
{
	int			cases;
	int			size_candies, size_queries;
	int			candie;
	vector<int>	candies;

	cin >> cases;
	while (cases--)
	{
		cin >> size_candies >> size_queries;
		while (size_candies--)
		{
			cin >> candie;
			candies.push_back(candie);
		}
		solve(candies, size_queries);
		candies.clear();
	}
	return (0);
}