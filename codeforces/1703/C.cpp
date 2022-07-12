    /******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <cstring>

using namespace std;

void    get_initial(string moves, int end_val)
{
    for (int i=0; i<moves.length(); i++)
    {
        if (moves[i] == 'U')
            end_val--;
        else
            end_val++;
        if (end_val == -1)
            end_val = 9;
        if (end_val == 10)
            end_val = 0;
    }
    cout << end_val << endl;
}

void    solve(int wheels, int *end_val)
{
    for (int i=0; i<wheels; i++)
    {
        string  moves;
        string  count;
        
        cin >> count >> moves;
        get_initial(moves, end_val[i]);
    }
}

void    parse()
{
    int wheels;
    int *end_val;
    
    cin >> wheels;
    end_val = (int *)malloc(sizeof(int) * wheels);
    for (int i=0; i<wheels; i++) cin >> end_val[i];
    solve(wheels, end_val);   
}

int main()
{
    int cases;
    
    cin >> cases;
    while (cases--)
        parse();
    return 0;
}


