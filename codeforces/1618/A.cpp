#include <vector>
#include <cmath>
#include <algorithm>
#include <iostream>
#include <unordered_map>

using namespace std;

#define RIGHT 1
#define LEFT 0

void	solve()
{
	vector<int>	b(7);
	for (int i=0; i<7; i++) cin >> b[i];
	cout << b[0] << " " << b[1] << " " << b[6] - b[0] - b[1] << endl;
}

int main()
{
	int	cases;

	cin >> cases;
	while (cases--)
		solve();
	return (0);
}
