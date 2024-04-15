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
    string yes("YES");
    
    for (int i=0; i<3; i++)
    {
        if (toupper(s[i]) != yes[i])
        {
            cout << "NO" << endl;
            return ;
        }
    }
    cout << "YES" << endl;
}

void    parse()
{
    string s;
    
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

// 10
// YES
// yES
// yes
// Yes
// YeS
// Noo
// orZ
// yEz
// Yas
// XES

