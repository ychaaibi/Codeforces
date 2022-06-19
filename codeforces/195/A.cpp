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
	int data_second, data_per_second, movie_seconds;

	cin >> data_second >> data_per_second >> movie_seconds;
	if (((data_second * movie_seconds) / data_per_second) + !!((data_second * movie_seconds) % data_per_second) < movie_seconds)
		cout << 1 << endl;
	else
		cout << (int)((data_second * movie_seconds) / data_per_second) - movie_seconds + !!((data_second * movie_seconds) % data_per_second) << endl;
}

int main()
{
	parse();
}