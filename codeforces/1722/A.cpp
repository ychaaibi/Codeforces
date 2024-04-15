#include <algorithm>
#include <vector>
#include <string>
#include <iostream>

using namespace std;

int     is_in(char c, const char *s)
{
        for (int i=0; s[i]; i++)
        {
                if (s[i] == c)
                        return (1);
        }
        return (0);
}

int     solve(string s)
{
        vector<int>     tab(125, 0);

        for (int i=0; i<s.length(); i++) tab[s[i]]++;
        for (int i=0; i<125; i++)
        {
                if ((tab[i] && !is_in((char )i, "Timur")) or (tab[i] != 1 && is_in((char )i, "Timur")))
                        return (0);
        }
        return (1);

}

void    parse()
{
        int     size;
        string  s;

        cin >> size >> s;
        if (solve(s))
                cout << "YES" << endl;
        else
                cout << "NO" << endl;
}

int     main()
{
        int     cases = 1;

        cin >> cases;
        while (cases--)
                parse();
        return (0);
}