#include<bits/stdc++.h>

using namespace std;

void knightTour(vector<vector<int>>B, int currRow, int currCol, int move)
{
    if(currRow < 0 or currCol < 0 or currRow >= B.size() or currCol >= B.size() or B[currRow][currCol] > 0)
        return;
    
    if(move == B.size() * B.size())
    {
        for(auto i : B)
        {
            for(auto j : i)
                cout << j << " ";
            cout << endl;
        }
        cout << endl;
        return;
    }

    B[currRow][currCol] = move;

    knightTour(B, currRow - 2, currCol + 1, move + 1); // 1
    knightTour(B, currRow - 1, currCol + 2, move + 1); // 2
    knightTour(B, currRow + 1, currCol + 2, move + 1); // 3
    knightTour(B, currRow + 2, currCol + 1, move + 1); // 4
    knightTour(B, currRow + 2, currCol - 1, move + 1); // 5
    knightTour(B, currRow + 1, currCol - 2, move + 1); // 6
    knightTour(B, currRow - 1, currCol - 2, move + 1); // 7
    knightTour(B, currRow - 2, currCol - 1, move + 1); // 8

    B[currRow][currCol] = 0;
}

int main() 
{
    const int N = 4;
    vector<vector<int>> Board(N, vector<int>(N, 0));

    knightTour(Board, 0, 0, 1);
}