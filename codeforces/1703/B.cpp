    /******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <cstring>

using namespace std;

void    solve(string s)
{
    int total_ballons = 0;
    int tab[26];
    
    memset(tab, 0, sizeof(int) * 26);
    for (int i=0; i<s.length(); i++)
    {
        if (tab[s[i] - 'A'])
            total_ballons++;
        else
        {
            tab[s[i] - 'A'] = 1;
            total_ballons += 2;
        }
    }
    cout << total_ballons << endl;
}

void    parse()
{
    string  s;
    int     len;
    
    cin >> len >> s;
    solve(s);
}

int main()
{
    int cases;
    
    cin >> cases;
    while (cases--)
        parse();
    return 0;
}

// 6
// 3
// ABA
// 1
// A
// 3
// ORZ
// 5
// BAAAA
// 4
// BKPT
// 10
// CODEFORCES

// 5
// 2
// 6
// 7
// 8
// 17

