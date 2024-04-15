// Example program
#include <iostream>
#include <string>
#include <vector>


using namespace std;

void    solve(string s, int k)
{
    int count;
    int i = 0;
    
    count = 0;
    while (i < k)
    {
        if (s[i] == 'W')
            count++;
        i++;
    }
    int min_hed = count;
    i = k;
    while (i < s.length())
    {
        if (s[i] == 'W')
            count++;
        if (s[i - k] == 'W')
            count--;
        i++;
        min_hed = min(min_hed, count);
    }
    cout << min_hed << endl;    
}


int main()
{
    int     n, k;
    int     cases;
    string  s;
    
    cin >> cases;
    while (cases--)
    {
        cin >> n >> k;
        cin >> s;
        solve(s, k);
    }
    return (0);
}

        