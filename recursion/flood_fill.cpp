#include <iostream>
#include <vector>

using namespace std;

void solve(vector<vector<int>> Maze, int currRow, int currCol, string ans, vector<vector<bool>> isVisited)
{
    if (currRow >= Maze.size() or currCol >= Maze[0].size() or currRow < 0 or currCol < 0 or Maze[currRow][currCol] == 1 or isVisited[currRow][currCol] == true)
        return;

    if (currRow == Maze.size() - 1 and currCol == Maze[0].size() - 1)
    {
        cout << ans << endl;
        return;
    }

    isVisited[currRow][currCol] = true;
    //choice 1: trying to go to top
    solve(Maze, currRow - 1, currCol, ans + 'U', isVisited);
    //choice 2: trying to go to right
    solve(Maze, currRow, currCol + 1, ans + 'R', isVisited);
    //choice 3: trying to go to down
    solve(Maze, currRow + 1, currCol, ans + 'D', isVisited);
    //choice 4: trying to go to left
    solve(Maze, currRow, currCol - 1, ans + 'L', isVisited);
    isVisited[currRow][currCol] = false;
}
int main()
{
    vector<vector<int>> Maze = {{0, 1, 0, 0, 0, 0, 0},
                                {0, 1, 0, 1, 1, 1, 0},
                                {0, 0, 0, 0, 0, 0, 0},
                                {1, 0, 1, 1, 0, 1, 1},
                                {1, 0, 1, 1, 0, 1, 1},
                                {1, 0, 0, 0, 0, 0, 0}};
    vector<vector<bool>> isVisited(6, vector<bool>(7, false));


    solve(Maze, 0, 0, "", isVisited);
}