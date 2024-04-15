#include <vector>
#include <cmath>
#include <algorithm>
#include <iostream>

using namespace std;

void	solve(string keyboard, string word)
{
	int	keys[26];
	int	i = 0;
	long long	total = 0;

	while (i < keyboard.length())
	{
		keys[keyboard[i] - 97] = i;
		i++;
	}
	i = 0;
	while (i < word.length() - 1)
	{
		total += max(keys[word[i] - 97], keys[word[i + 1] - 97]) - min(keys[word[i] - 97], keys[word[i + 1] - 97]);
		i++;
	}
	cout << total << endl;
}

void	parse()
{
	string	keyboard, word;
	cin >> keyboard >> word;
	solve(keyboard, word);
}

int main()
{
	int	cases;

	cin >> cases;
	while (cases--)
		parse();
}
