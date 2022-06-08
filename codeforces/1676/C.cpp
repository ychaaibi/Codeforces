#include <algorithm>
#include <iostream>
#include <cmath>
#include <vector>

using namespace	std;

long long	find_min(string s1, string s2)
{
	int			i = -1;
	long long	total = 0;

	while (++i < s1.length())
	{
		total += max(s1[i], s2[i]) - min(s1[i], s2[i]);
	}
	return (total);
}

void	solve(vector<string> strings)
{
	int			i = -1;
	long long	m = LONG_MAX;
	for (int i=0; i<strings.size() - 1; i++)
	{
		for (int j=i + 1; j<strings.size(); j++)
		{
			m = min(find_min(strings[i], strings[j]), m);
		}
	}
	cout << m << endl;
}

int main()
{
	int			cases;
	int			size, size_word;
	string		val;
	vector<string>	strings;

	cin >> cases;
	while (cases--)
	{
		cin >> size >> size_word;
		while (size--)
		{
			cin >> val;
			strings.push_back(val);
		}
		solve(strings);
		strings.clear();
	}
	return (0);
}