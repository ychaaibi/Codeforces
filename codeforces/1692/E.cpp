// Online C++ compiler to run C++ program online
#include <iostream>
//6 3
//1 1 1 1 1 0
#include <iostream>
#include <vector>
#include <cmath>
#include <string>
#include <bits/stdc++.h>


using namespace std;

int most_right(vector<int> vec, int target)
{
    int start = 0, end = vec.size(), mid;
    
    while (start < end)
    {
        mid = (start + end) / 2;
        if (vec[mid] == target && ((mid + 1 < vec.size() && vec[mid + 1] != target) || mid + 1 >= vec.size()))
            return (mid);
        else if (vec[mid] > target)
            end = mid;
        else
            start = mid + 1;
    }
    return (-1);  
}

void solve(vector<int> nums, vector<int> sum, int s) {
    int i = 0;
    int mx = -1;
    int search;
    
    for (int i = 0; i < nums.size(); i++)
    {
        search = upper_bound(sum.begin(), sum.end(), s + (i ? sum[i - 1] : 0)) - sum.begin();
        //cout << search << " " << nums[i] + s + (i ? nums[i - 1] : 0) << endl;
        if (search != -1 && sum[search - 1] == s + (i ? sum[i - 1] : 0))
            mx = max(mx, search - i);
    }
    if (mx == -1)
    {
        cout << mx << endl;
        return ;
    }
    cout << (int)nums.size() - mx << endl;
}

void    parse()
{
    int size, s;
    cin >> size >> s;
    
    vector<int> vec(size);
    vector<int> sum(size);
    for (int i = 0; i < size; i++){
        cin >> vec[i];
        sum[i] = vec[i];
        if (i)
            sum[i] += sum[i - 1];
        //cout << sum[i] << " ";
    }
    cout << endl;
    solve(vec, sum, s);
}

int main()
{
    int size;
    
    cin >> size;
    while (size--)
        parse();
    return 0;
}
