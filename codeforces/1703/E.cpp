    /******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <cstring>
#include <string>
#include <vector>

using namespace std;

void    solve(vector<string> matrix)
{
    int c_1, c_0;
    int moves = 0;
    int n = matrix.size();
    int s = 0, e = n - 1;

    while (s < e)
    {
        //cout << "Sep " << s << " " << e <<endl;
        for (int i=0; i<e - s; i++)
        {
            c_0 = 0, c_1 = 0;
            if (matrix[s][s + i] == '1')
                c_1++;
            else
                c_0++;
            if (matrix[s + i][e] == '1')
                c_1++;
            else
                c_0++;
            if (matrix[e][e - i] == '1')
                c_1++;
            else
                c_0++;
            if (matrix[e - i][s] == '1')
                c_1++;
            else
                c_0++;
            //cout << c_0 << " " << c_1 << endl;
            moves += min(c_0, c_1);
        }
        s++;
        e--;
    }
    cout << moves << endl;
}

void    parse()
{
    int             matrix_len;
    
    cin >> matrix_len;
    vector<string>  matrix(matrix_len);
    for (int i=0; i<matrix_len; i++) cin >> matrix[i];
    solve(matrix);
}

int main()
{
    int cases;
    
    cin >> cases;
    while (cases--)
        parse();
    return 0;
}


