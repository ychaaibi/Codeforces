#include <algorithm>
#include <vector>
#include <cmath>
#include <iostream>

using namespace std;

int solve(int a, int b, int c, int x, int y)
{
    if (a < x && b < y)
    {
        if (x - a + y - b <= c)
            return (1);
        else
            return (0);
    }
    else if (a < x)
    {
        if (x - a <= c)
            return (1);
        else
            return (0);
    }
    else if (b < y)
    {
        if (y - b <= c)
            return (1);
        else
            return (0);
    }
    else
        return (1);
    return (0);
}

int main()
{
    int cases;
    int solution;
    int a, b, c, x, y;

    cin >> cases;
    while (cases--)
    {
        cin >> a >> b >> c >> x >> y;
        solution = solve(a, b, c, x, y);
        if (solution)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return (0);
}