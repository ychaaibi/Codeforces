#include <vector>
#include <cmath>
#include <algorithm>
#include <iostream>

using namespace std;

void	solve(int n)
{
	for (int i=0; i<n - 1; i++)
	{
		if (!(i % 2))
			cout << "I hate that ";
		else
			cout << "I love that ";
	}
	if (n % 2)
		cout << "I hate it ";
	else
		cout << "I love it ";
}

void	parse()
{
	int	n;
	cin >> n;
	solve(n);
}

int main()
{
	parse();
}