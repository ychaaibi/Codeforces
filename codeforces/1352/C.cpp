// for basicMath::add()
#include <iostream>

using namespace std;

int main()
{
    
    long long   n, k;
    int cases;

    cin >> cases;

    while (cases--)
    {
    cin >> n >> k;
    long long   res = k / (n - 1);
    long long   ans = n * res + (k % (n - 1));
    if (k % (n - 1) == 0) ans--;
    cout << ans << endl;
    
    }return 0;
}
