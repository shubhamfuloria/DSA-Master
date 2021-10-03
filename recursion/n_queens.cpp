#include <bits/stdc++.h>

using namespace std;

bool isItSafePlace(vector<vector<int>> board, int row, int col)
{
    //check in the left diagonal

    for (int i = row - 1, j = col - 1; i >= 0 and j >= 0; i--, j--)
        if (board[i][j] == 1)
            return false;

    //check for veritcal column

    for (int i = row - 1; i >= 0; i--)
        if (board[i][col] == 1)
            return false;

    for (int i = row - 1, j = col + 1; i >= 0 and j < board.size(); i--, j++)
        if (board[i][j] == 1)
            return false;

    return true;
}

void printNQueens(vector<vector<int>> board, int row)
{

    if (row == board.size())
    {
        for (auto i : board)
        {
            for (auto j : i)
                cout << j << " ";
            cout << endl;
        }

        cout << endl;
        return;
    }

    for (int col = 0; col < board.size(); col++)
    {
        if (isItSafePlace(board, row, col))
        {
            board[row][col] = 1;
            printNQueens(board, row + 1);
            board[row][col] = 0;
        }
    }
}
int main()
{
    int N = 2;
    vector<vector<int>> board(N, vector<int>(N, 0));
    printNQueens(board, 0);
}