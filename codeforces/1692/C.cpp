#include <iostream>
#include <vector>
#include <string>


using namespace std;
void    solve(vector<string> board)
{
    for (int i=1; i < 7; i++)
    {
        for (int j=1; j < 7; j++)
        {
            if (board[i][j] == '#'
                && board[i - 1][j + 1] == '#' && board[i + 1][j - 1] == '#'
                && board[i - 1][j - 1] == '#' && board[i + 1][j + 1] == '#')
            {
                cout << i + 1 << " " << j + 1<< endl;
                return ;
            }
        }
    }
}

void    parse()
{
    vector<string> board(8);
    
    for (int i=0; i < 8; i++) cin >> board[i];
    solve(board);
}

int main()
{
    int testCases;

    cin >> testCases;
    while (testCases--)
        parse();
    return (0);
}