#include <algorithm>
#include <iostream>
#include <cmath>
#include <vector>

using namespace	std;

void	solve(vector<int> box)
{
	int	m = box[0];
	long long	total = 0;
	for (int i=0; i<box.size(); i++)
		m = min(m, box[i]);
	for (int i=0; i<box.size(); i++)
		total += (box[i] - m);
	cout << total << endl;
}

int main()
{
	int			cases;
	int			size;
	int			val;
	vector<int>	box;

	cin >> cases;
	while (cases--)
	{
		cin >> size;
		while (size--)
		{
			cin >> val;
			box.push_back(val);
		}
		solve(box);
		box.clear();
	}
	return (0);
}