// Example program
#include <iostream>
#include <string>
#include <vector>


using namespace std;
void    solve(vector<int> s, vector<int> f)
{
    vector<int> d;
    d.push_back(f[0] - s[0]);
    for (int i=1; i<s.size(); i++)
    {
        d.push_back(f[i] - max(s[i], f[i - 1]));
    }    
    for (int i=0; i<d.size(); i++)
        cout << d[i] << " ";
    cout << endl;
}

        

int main()
{
    int size;
    int val;
    int cases;
    vector<int> s;
    vector<int> f;
    
    cin >> cases;
    while (cases--)
    {
        cin >> size;
        for (int i=0; i<size; i++)
        {
            cin >> val;
            s.push_back(val);
        }
        for (int i=0; i<size; i++)
        {
            cin >> val;
            f.push_back(val);
        }
        solve(s, f);
        s.clear();
        f.clear();
    }
    return (0);
}

        