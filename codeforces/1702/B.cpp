/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <cmath>
#include <cstring>
#include <algorithm>

using namespace std;

void    solve(string s)
{
    int tab[26];
    int i;
    int count_letters = 0;
    int count_days = 0;
    i = 0;
    memset(tab, 0, sizeof(int) * 26);
    while (i < s.length())
    {
        if (!tab[s[i] - 'a'])
            count_letters++;
        tab[s[i] - 'a']++;
        if (count_letters == 4)
        {
            count_days++;
            memset(tab, 0, sizeof(int) * 26);
            count_letters = 0;
            continue ;
        }
        i++;
    }
    cout <<count_days + !!count_letters << endl;
}

void    parse()
{
    string  s;
    
    cin >> s;
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
// lollipops
// stringology
// abracadabra
// codeforces
// test
// f

