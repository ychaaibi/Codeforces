/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

void    solve(string s, int d_price)
{
    int         price = 0;
    string      sol("");
    int         tab[26];
    
    memset(tab, 0, sizeof(int) * 26);
    for (int i=0; i<s.length(); i++)
    {
        price += s[i] - 'a' + 1;
        tab[s[i] - 'a']++;
    }
    if (price <= d_price)
    {
        cout << s << endl;
        return ;
    }
    for (int i=25; i>=0; i--)
    {
        if (!tab[i])
            continue ;
        if (price - tab[i] * (i + 1) > d_price)
        {
            price -= tab[i] * (i + 1);
            tab[i] = 0;
        }
        else
        {
            while (price > d_price)
            {
                price -= (i + 1);
                tab[i]--;
            }
            break ;
        }
    }
    for (int i=0; i<s.length(); i++)
    {
       if (tab[s[i] - 'a'])
       {
            sol += string(1, s[i]);
            tab[s[i] - 'a']--;
       }
    }
    cout << sol << endl;
}

void    parse()
{
    string  s;
    int     d_price;
    
    cin >> s >> d_price;
    solve(s, d_price);
}

int main()
{
    int cases;
    
    cin >> cases;
    while (cases--)
        parse();

    return 0;
}

// 5
// abca
// 2
// abca
// 6
// codeforces
// 1
// codeforces
// 10
// codeforces
// 100

