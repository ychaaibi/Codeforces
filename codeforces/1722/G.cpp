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
                even.push_back(k);
                even.push_back(k + 1);
                odd.push_back(k + 4);
                odd.push_back(k + 5);
                k += 8;
        }
        if (n % 4 == 1)
                even.push_back(0);
        else if (n % 4 == 3)
        {
                even.push_back(1);
                even.push_back(2);
                odd.push_back(3);
        }
        else if (n % 4 == 2)
        {
                odd.push_back(7);
                even.push_back(3);
                odd.push_back(1);
                odd.push_back(2);
                even.push_back(11);
                even.push_back(12);
        }
        int     total_odd = 0;
        int     total_even = 0;
        for (int i=0; i<odd.size(); i++)
                cout << even[i] << " " << odd[i] << " ";
        if (even.size() > odd.size())
                cout << even[even.size() - 1] << " ";
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
