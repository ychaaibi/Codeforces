/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

void    solve(int num)
{
    long long temp = num;
    long long ten = 1;
    
    if (!num)
    {
        cout << num << endl;
        return ;
    }
    while (temp >= 10)
    {
        temp /= 10;
        ten *= 10;
    }
    cout << num - ten << endl;
}

void    parse()
{
    int num;
    
    cin >> num;
    solve(num);
}

int main()
{
    int cases;
    
    cin >> cases;
    while (cases--)
        parse();
    return 0;
}
//987654321
