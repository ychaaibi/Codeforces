#include <vector>
#include <cmath>
#include <algorithm>
#include <iostream>
#include <unordered_map>

using namespace std;



int	solve()
{
	int					size;
	vector<int>			terms;
	vector<int>			Blue;
	vector<int>			Red;
	string				colors;


	cin >> size;
	for (int i=0; i<size; i++)
	{
		int	val;
		
		cin >> val;
		terms.push_back(val);
	}
	cin >> colors;
	for (int i=0; i<size; i++)
	{
		if (colors[i] == 'R')
			Red.push_back(terms[i]);
		else
			Blue.push_back(terms[i]);
	}
	sort(Red.begin(), Red.end());
	sort(Blue.begin(), Blue.end());
	int	r=0, b=0, num = 1;

	while (num <= size)
	{
		if (b == Blue.size())
		{
			if (Red[r] > num)
				return (0);
			else
				r++;
		}
		else if (r == Red.size())
		{
			if (Blue[b] < num)
				return (0);
			else
				b++;
		}
		else
		{
			if (Blue[b] == num)
				b++;
			else if (Blue[b] < num)
				return (0);
			else
				b++;
		}
		num++;
	}
	return (1);
}

int main()
{
	int	cases;

	cin >> cases;
	while (cases--)
	{
		if (solve())
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
}
