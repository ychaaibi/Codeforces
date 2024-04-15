/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

void solve(vector<int> nums, int sum) {
    int i = 0;
    int s = 0;
    int mx = -1;

    while (++i < nums.size())
        nums[i] += nums[i - 1];
    i = 0;
    while (i < nums.size())
    {
        if (nums[i] - (s ? nums[s - 1] : 0) < sum)
            i++;
        else if (nums[i] - (s ? nums[s - 1] : 0) == sum)
        {
            mx = max(mx, i - s + 1);
            i++;
        }
        else
            s++;
    }
    if (mx == -1)
    {
        cout << -1 << endl;
        return ;
    }
    cout << ((mx != -1) ? nums.size() - mx : -1) << endl;
}

void    parse()
{
    int size, s;
    cin >> size >> s;
    
    vector<int> vec(size);
    for (int i = 0; i < size; i++) cin >> vec[i];
    solve(vec, s);
}

int main()
{
    int size;
    
    cin >> size;
    while (size--)
        parse();
    return 0;
}
