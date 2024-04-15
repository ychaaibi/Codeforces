#include <iostream>
#include <unordered_set>
#include <unordered_map>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

int     max(int a, int b)
{
    return ((a < b) ? b : a);
}

int     there_is_solution(string A, string B)
{
    int i;
    
    i = -1;
    while (++i < A.length())
        if (A[i] > B[i])
            return (0);
    return (1);
}

void    solve(string A, string B)
{
    int         i;
    int         min_letter;
    int         moves;
    int         c;
    vector<int> map;

    if (!there_is_solution(A, B))
    {
        cout << "-1" << endl;
        return ;
    }
    c = 'a';
    moves = 0;
    while (c <= 't')
    {
        min_letter = 't';
        i = -1;
        while (++i < A.length())
        {
            if (A[i] != B[i] && A[i] == c)
            {
                map.push_back(i);
                min_letter = (min_letter < B[i]) ? min_letter : B[i];
            }
        }
        i = 0;
        if (map.size())
            moves++;
        while (i < map.size())
            A[map[i++]] = min_letter;
        map.clear();
        c++;
    }
    cout << moves << endl;
}

int main()
{
    int     testCases;
    int     string_len;
    string  A;
    string  B;

    cin >> testCases;
    while (testCases--)
    {
        cin >> string_len;
        cin >> A;
        cin >> B;
        solve(A, B);
    }
    return (0);
}