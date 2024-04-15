// Example program
#include <iostream>
#include <string>

using namespace std;

void solve(int n)
{
    if ((n - 6) % 3 == 0)
        cout << 2 + (n - 6)/3 << " " << 3 + (n - 6)/3 << " " << 1 + (n - 6)/3 << endl;
    else if ((n - 6) % 3 == 1)
        cout << 2 + (n - 6)/3 << " " << 3 + (n - 6)/3 + 1<< " " << 1 + (n - 6)/3 << endl;
    else if ((n - 6) % 3 == 2)
        cout << 2 + (n - 6)/3 + 1 << " " << 3 + (n - 6)/3 + 1 << " " << 1 + (n - 6)/3 << endl;
}

int main()
{
    int n;
    int cases;
    
    cin >> cases;
    while (cases--)
    {
        cin >> n;
        solve(n);
    }
    return (0);
}

