#include <vector>
#include <cmath>
#include <iostream>

using namespace std;

void	solve(string s, char c)
{
	int	i = 0;

	if (s[0] == c)
	{
		cout << "YES" << endl;
		return ;
	}
	while (i < s.length())
	{
		if (c == s[i])
		{
			if (i % 2 == 0)
			{
				cout << "YES" << endl;
				return ;
			}
		}
		i++;
	}
	cout << "NO" << endl;
}

void	parse()
{
	string	s;
	char	c;

	cin >> s >> c;
	solve(s, c);
}

int main()
{
    int cases;

	cin >> cases;
	while (cases--)
		parse();
}