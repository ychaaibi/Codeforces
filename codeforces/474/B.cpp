#include <vector>
#include <cmath>
#include <algorithm>
#include <iostream>

using namespace std;

int b_search(vector<int>& arr, int target)
{
    int start = 0, end = arr.size(), middle;
    
    while (start < end)
    {
        middle = (end + start) / 2;
        if (arr[middle] > target)
            end = middle;
        else if (arr[middle] < target)
            start = middle + 1;
        else
            return (middle);
    }
    return (start);
}

int main()
{
	int			worms_count;

	cin >> worms_count;
	vector<int>	worms(worms_count + 1);
	worms[0];
	for (int i = 1; i <= worms_count; i++)
	{
		cin >> worms[i];
		worms[i] += worms[i - 1];
	}
	int juices_size;
	
	cin >> juices_size;
	for (int i = 0; i < juices_size; i++)
	{
		int juice ;

		cin >> juice;
		cout << b_search(worms, juice) << endl;
	}

}
