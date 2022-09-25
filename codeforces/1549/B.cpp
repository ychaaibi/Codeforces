#include <iostream>
#include <vector>
#include <string>

using namespace std;

void    solve(string my_row, string e_row)
{
        int     k = 0;

        if (my_row[0] == '1')
        {
                k++;
                if (e_row[0] == '0')
                        e_row[0] = 'r';
                else if (e_row[1] == '1')
                        e_row[1] = 'r';
                else
                        k--;
        }
        for (int i=1; i<my_row.size() - 1; i++)
        {
                if (my_row[i] == '1')
                {
                        k++;
                        if (e_row[i - 1] == '1')
                                e_row[i - 1] = 'r';
                        else if (e_row[i] == '0')
                                e_row[i] = 'r';
                        else if (e_row[i + 1] == '1')
                                e_row[i + 1] = 'r';
                        else
                                k--;
                }
        }
        if (my_row[my_row.size() - 1] == '1')
        {
                k++;
                if (e_row[my_row.size() - 2] == '1')
                        e_row[my_row.size() - 2] = 'r';
                else if (e_row[my_row.size() - 1] == '0')
                        e_row[my_row.size() - 1] = 'r';
                else
                        k--;
        }
        cout << k << endl;
}

void    parse()
{
        int     size;
        string  my_row, e_row;

        cin >> size >> e_row >> my_row;
        solve(my_row, e_row);
}

int     main()
{
        int cases;

        cin >> cases;

        while (cases--)
                parse();
        return (0);
}
