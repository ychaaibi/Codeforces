// Online C++ compiler to run C++ program online
#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

void    solve(string s)
{
    string  decode("");
    int i = s.length() - 1;
    
    while (i >= 0)
    {
        if (s[i] == '0')
        {
            decode += string(1, 'a' + (s[i - 2] - 48) * 10 + s[i - 1] - 49);
            i -= 3;
        }
        else
        {
            decode += string(1, 'a' + s[i] - 49);
            i--;
        }
    }
    reverse(decode.begin(), decode.end());
    cout << decode << endl;
}

void    parse()
{
    string  s;
    int     len;
    
    cin >> len >> s;
    solve(s);
}

int main() {
    int n;
    
    cin >> n;
    while (n--)
        parse();
    return 0;
}