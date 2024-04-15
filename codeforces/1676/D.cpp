#include <algorithm>
#include <iostream>
#include <cmath>
#include <vector>

using namespace	std;

int		left_diago_sum(vector<vector<int> > matrix, int i, int j)
{
	int	sum = 0;
	int	dist = 1;

	//cout << matrix.size() << endl;
	while (i - dist >= 0 && j - dist >= 0)
	{
		sum += matrix[i - dist][j  - dist];
		dist++;
	}
	dist = 1;
	while (i + dist < matrix.size() && j + dist < matrix[i + dist].size())
	{
		sum += matrix[i + dist][j + dist];
		dist++;
	}
	return (sum);
}

int		right_diag_sum(vector<vector<int> > matrix, int i, int j)
{
	int	sum = 0;
	int	dist = 1;
	//cout << matrix.size() << endl;
	while (i - dist >= 0 && j + dist < matrix[i - dist].size())
	{
		sum += matrix[i - dist][j + dist];
		dist++;
	}
	dist = 1;
	while (i + dist < matrix.size() && j - dist >= 0)
	{
		sum += matrix[i + dist][j - dist];
		dist++;
	}
	return (sum);
}

void	solve(vector<vector<int> > matrix)
{
	int						m = -1;
	int						i = 0, j = 0;

	while (i < matrix.size())
	{
		j = 0;
		while (j < matrix[i].size())
		{
			m = max(m, matrix[i][j] + right_diag_sum(matrix, i, j) + left_diago_sum(matrix, i, j));
			j++;
		}
		i++;
	}
	cout << m << endl;		
}

void	parse()
{
	int	n, m;
	int	i = -1, j;
	int	val;
	
	cin >> n >> m;
	vector<vector<int> >	matrix(n);
	while (++i < n)
	{
		j = -1;
		while (++j < m)
		{
			cin >> val;
			matrix[i].push_back(val);
		}
	}
	solve(matrix);
}


int main()
{
	int	testCases;

	cin >> testCases;
	while (testCases--)
		parse();
	return (0);
}