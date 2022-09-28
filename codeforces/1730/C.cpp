#include <vector>
#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

void    solve(string s)
{
        vector<int>     count(10);

        for (int i=0; i<s.length(); i++) count[s[i] - 48]++;
        for (int i=9; i>=0; i--)
        {
                int     check = 0;
                for (int j=0; j< s.length(); j++)
                {
                        if (s[j] == i + 48)
                                check++;
                        else if (s[j] < i + 48 && check)
                        {
                                count[i] -= check;
                                count[min(i + 1, 9)] += check;
                                check = 0;
                        }
                }
        }
        for (int i=0; i<10; i++)
        {
                for (int j=0; j<count[i]; j++) cout << (char)(i + 48);
        }
        cout << endl;
}

void    parse()
{
        string  s;

        cin >> s;
        solve(s);
}

int     main()
{
        int     cases = 1;

        cin >> cases;
        while (cases--)
                parse();
        return (0);
}