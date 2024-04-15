#include <algorithm>
#include <vector>
#include <string>
#include <iostream>

using namespace std;

void    solve(string s)
{
        long long               total = 0;
        vector<long long >      B(s.length());
        long long               n = (long long)s.length();

        for (int i=0; i<s.length(); i++)
        {
                if (s[i] == 'L')
                {
                        total += i;
                        B[i] = n - 1 - i - i;
                }
                else
                {
                        total += s.length() - 1 - i;
                        B[i] = i - (n - 1 - i);
                }
        }
        sort(B.begin(), B.end(), greater<long long >());
        for (int i=0; i<B.size(); i++) 
        {
                total = max(total + B[i], total);
                cout << total << " ";
        }
        cout << endl;
}

void    parse()
{
        int     size;
        string  s;

        cin >> size >> s;
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
