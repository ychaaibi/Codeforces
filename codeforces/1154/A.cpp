#include <vector>
#include <cmath>
#include <algorithm>
#include <iostream>

using namespace std;

void	solve(vector<int> values)
{
	int a_b_c = max(max(values[0], values[1]), max(values[2], values[3]));
	int	passed = 0;

	for (int i=0; i<4; i++)
	{
		if (values[i] == a_b_c && !passed)
		{
			passed = 1;
			continue ;
		}
		cout << a_b_c - values[i] << " ";
	}
}

void	parse()
{
	vector<int> values(4);
	
	cin >> values[0] >> values[1] >> values[2] >> values[3];
	solve(values);
}

int main()
{
	parse();
}