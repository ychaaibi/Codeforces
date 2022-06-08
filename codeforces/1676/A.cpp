#include <algorithm>
#include <iostream>
#include <cmath>
#include <vector>

using namespace	std;

void	solve(string tick)
{
	if (tick[0] + tick[1] + tick[2] == tick[3] + tick[4] + tick[5])
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
}

int main()
{
	int		cases;
	string num;

	cin >> cases;
	while (cases--)
	{
		cin >> num;
		solve(num);
	}
	return (0);
}