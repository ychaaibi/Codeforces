// Online C++ compiler to run C++ program online
#include <iostream>
#include <algorithm>

using namespace std;

void    solve(int a, int b, int c)
{
    int f_time, s_time;
    
    f_time = a - 1;
    s_time = abs(b - c) + c - 1;
    if (f_time == s_time)
        cout << 3 << endl;
    else if (f_time > s_time)
        cout << 2 << endl;
    else
        cout << 1 << endl;
}

void    parse()
{
    int     a, b, c;
    
    cin >> a >> b >> c;
    solve(a, b, c);
}

int main() {
    int n;
    
    cin >> n;
    while (n--)
        parse();
    return 0;
}