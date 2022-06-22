#include <vector>
#include <cmath>
#include <algorithm>
#include <iostream>
#include <numeric>
#include <unordered_map>
#include <cmath>

using namespace std;

void	solve()
{
	int	size;
	long long GCD;

	cin >> size;
	vector<long long>	numbers(size);
	for (int i=0; i<size; i++) cin >> numbers[i];
	GCD = gcd(numbers[0], numbers[0]);
	for (int i=2; i<size; i+=2) GCD = gcd(GCD, numbers[i]);
	for (int i=1; i<size; i+=2)
	{
		if (numbers[i] % GCD == 0)
			break ;
		if (i + 2 >= size)
		{
			cout << GCD << endl;
			return ;
		}
	}
	GCD = gcd(numbers[1], numbers[1]);
	for (int i=3; i<size; i+=2) GCD = gcd(GCD, numbers[i]);
	for (int i=0; i<size; i+=2)
	{
		if (numbers[i] % GCD == 0)
			break ;
		if (i + 2 >= size)
		{
			cout << GCD << endl;
			return ;
		}
	}
	cout << 0 << endl;
}

int main()
{
	int	cases;

	cin >> cases;
	while (cases--)
		solve();
	return (0);
}
