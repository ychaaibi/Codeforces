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
	int			length;
	int			found = 0;
	string		s;

	cin >> length;
	vector<string>	biagrams(length - 2);
	for (int i=0; i<biagrams.size(); i++) cin >> biagrams[i];//, cout << biagrams[i] << ". ";
	s += biagrams[0];
	//cout << s << endl;
	for (int i=1; i<biagrams.size(); i++)
	{

		if (biagrams[i][0] != biagrams[i - 1][1])
		{
			found = 1;
			s += biagrams[i];
		}
		else
			s += string(1, biagrams[i][1]);
	}
	if (found)
	{
		cout << s << endl;
		return ;
	}
	cout << string("a") + s << endl;
}

int main()
{
	int	cases;

	cin >> cases;
	while (cases--)
		solve();
	return (0);
}
