// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void    solve()
{
    long long   n, k;
    cin >> n >> k;
    
    int rest = k % 2;
    k -= rest;
    
    if (n * 2 - 2 >= k / 2)
        cout << k / 2 + rest << endl;
    else
        cout << n * 2 - 2 + ( k - (n * 2 - 2) * 2 ) + rest << endl;
        
}



int main() {
    int cases;
    
    cin >> cases;
    while (cases--) solve();
    return 0;
}