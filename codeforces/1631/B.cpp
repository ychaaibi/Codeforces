#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void    solve(vector<int> arr)
{
        int     steps = 0;
        int     i = arr.size() - 2;

        while (i >= 0 && i >= arr.size() - 1 - i) 
        {
                if (arr[i] != arr[arr.size() - 1])
                {
                        steps++;
                        i -= arr.size() - i - 1;
                }
                else
                        i--;
        }
        while (i >= 0)
                if (arr[i--] != arr[arr.size() - 1] && ++steps)
                        break ;
        cout << steps << endl;
}


void    parse()
{
        int     size;

        cin >> size;
        vector<int>     arr(size);
        for (int i=0; i<size; i++) cin >> arr[i];
        solve(arr);
}


int     main()
{
        int     cases;

        cin >> cases;
        while (cases--)
                parse();
        return (0);
}
