#include <algorithm>
#include <vector>
#include <string>
#include <iostream>

using namespace std;


void    solve(int n)
{
        vector<int>     odd;
        vector<int>     even;
        int             k = 13;

        for (int i=0; i<(n/4 - ((n % 4) == 2)); i++)
        {
                cout << k << " " << k + 4 << " " << k + 1 << " " << k + 5 << " ";
                k += 8;
        }
        if (n % 4 == 1)
                cout << "0";
        else if (n % 4 == 3)
                cout << "1 3 2";
        else if (n % 4 == 2)
                cout << "7 3 1 11 2 12";
        cout << endl;
}

void    parse()
{
        int     n;

        cin >> n;
        solve(n);
}

int     main()
{
        int     cases = 1;

        cin >> cases;
        while (cases--)
                parse();
        return (0);
}