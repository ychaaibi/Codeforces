#include <vector>
#include <cmath>
#include <algorithm>
#include <iostream>

using namespace std;

void	solve(int n, string s)
{
	if (n == 1 || (n == 2 && s[0] != s[1]))
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
}

void	parse()
{
	int	   n;
	string s;

	cin >> n;
	cin >> s;
	solve(n, s);
}

int main()
{
	int	cases;
	
	cin >> cases;
	while (cases--)
		parse();
}