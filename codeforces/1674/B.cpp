#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int     main()
{
        string  s;
        int     cases;

        cin >> cases;
        while (cases--)
        {
                cin >> s;
                int     sum = (s[0] - 'a') * 25 + (s[1] - 'a' + 1);
                if (s[1] > s[0])
                        sum--;
                cout << sum << endl;
        }
        return (0);
}