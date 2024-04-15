#include <vector>
#include <cmath>
#include <iostream>

using namespace std;

void	solve(vector<long long > arr, int k)
{
	int	i;
	
	if (k > arr.size())
	{
		cout << 0 << endl;
		return ;
	}
	i = 1;
	int	count = 0;
	int	howmany = 0;
	while (i < arr.size())
	{
		if (arr[i] * 2 <= arr[i - 1])
		{
			i++;
			count = 0;
			continue ;
		}
		count++;
		if (count == k)
		{
			howmany++;
			count--;
		}
		i++;
	}
	cout << howmany << endl;
}

void	parse()
{
	int	size;
	int	k;

	cin >> size >> k;
	vector<long long >	vec(size);
	for (int i=0; i<size; i++) cin >> vec[i];
	solve(vec, k);
}

int main()
{
    int cases;

	cin >> cases;
	while (cases--)
		parse();
}