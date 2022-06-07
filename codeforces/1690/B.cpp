// Example program
#include <iostream>
#include <string>
#include <vector>


using namespace std;
void    solve(vector<int> a, vector<int> b)
{
    int m = a[0] - b[0];
    for (int i=0; i<a.size(); i++)
        m = max(m, a[i] - b[i]);
    for (int i=0; i<a.size(); i++)
    {
        if ((a[i] - b[i] < m && b[i] != 0) || a[i] - b[i] < 0)
        {
            cout << "NO" << endl;
            return ;
        }
    }
    cout << "YES" << endl;
}

        

int main()
{
    int size;
    int val;
    int cases;
    vector<int> a;
    vector<int> b;
    
    cin >> cases;
    while (cases--)
    {
        cin >> size;
        for (int i=0; i<size; i++)
        {
            cin >> val;
            a.push_back(val);
        }
        for (int i=0; i<size; i++)
        {
            cin >> val;
            b.push_back(val);
        }
        solve(a, b);
        a.clear();
        b.clear();
    }
    return (0);
}

        