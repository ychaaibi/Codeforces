// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void    solve()
{
    int n;
    
    cin >> n;
    vector<int> v(n);
    
    for (int i=0; i<n; i++) cin >> v[i]; 
    sort(v.begin(), v.end());
    
    long long   ans = 0;
    
    cout << v.back() - v.front() << endl;
}

int main() {
    int cases;
    
    cin >> cases;
    while (cases--) solve();
    return 0;
}