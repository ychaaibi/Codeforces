#include <vector>
#include <cmath>
#include <algorithm>
#include <iostream>

using namespace std;

int	Fa(int x, int a)
{
	return ((int)(x / a) + (x % a));
}

void	solve(int l, int r, int a)
{
	if (l == r)
	{
		cout << Fa(l, a) << endl;
		return ;
	}
	if (Fa(l, a) >= Fa(r, a))
	{
		cout << Fa(r - (r % a) - 1, a) << endl;
		return ;
	}
	else if ((l / a) == (r / a))
	{
		cout << Fa(r, a) << endl;
		return ;
	}
	else
		cout << (max(Fa(r, a), Fa(r - (r % a) - 1, a))) << endl;
}

void	parse()
{
	int l, r, a;

	cin >> l >> r >> a;
	solve(l, r, a);
}

int main()
{
    int cases;

	cin >> cases;
	while (cases--)
		parse();
}