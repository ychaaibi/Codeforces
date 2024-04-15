#include <algorithm>
#include <iostream>
#include <cmath>
#include <vector>

using namespace	std;

void	solve(vector<int> arr)
{
	int	add = 0;
	int	count = 0;

	sort(arr.begin(), arr.end());
	cout << arr[arr.size() - 1] - arr[0] << endl;
}

void	parse()
{
	vector<int>	arr;
	int			size;
	int			val;

	cin >> size;
	while (size--)
	{
		cin >> val;
		arr.push_back(val);
	}
	solve(arr);
}

int main()
{
	int	cases;

	cin >> cases;
	while (cases--)
		parse();
	return (0);
}