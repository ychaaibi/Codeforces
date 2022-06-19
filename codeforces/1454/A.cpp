#include <vector>
#include <cmath>
#include <algorithm>
#include <iostream>

using namespace std;

void	solve(int n)
{
	int	i = n;
	
	if (n % 2 == 0)
	{
		while (i > 0)
			cout << i-- << " ";
	}
	else
	{
		cout << (n / 2) + 1 << " ";
		while (i > 0)
		{
			if (i != (n / 2) + 1)
				cout << i << " ";
			i--;
		}
	}
	cout << endl;
}

void	parse()
{
	int	n;
	
	cin >> n;
	solve(n);
}

int main()
{
    int cases;

	cin >> cases;
	while (cases--)
		parse();
}