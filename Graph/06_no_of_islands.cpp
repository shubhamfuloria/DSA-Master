#include <bits/stdc++.h>

//0 -> land
//1 -> water

using namespace std;

void generateTree(vector<vector<int>> &map, vector<vector<bool>> &visited, int i, int j)
{
  if (i < 0 or j < 0 or i >= map.size() or j >= map[0].size() or visited[i][j] == true or map[i][j] == 1)
    return;

  visited[i][j] = true;

  generateTree(map, visited, i - 1, j);
  generateTree(map, visited, i, j + 1);
  generateTree(map, visited, i + 1, j);
  generateTree(map, visited, i, j - 1);
}

int noOfIslands(vector<vector<int>> &map)
{
  vector<vector<bool>> visited(map.size(), vector<bool>(map[0].size(), false));
  int count = 0;
  for (int i = 0; i < map.size(); i++)
  {
    for (int j = 0; j < map.size(); j++)
    {
      if (map[i][j] == 0 && visited[i][j] == false)
      {
        generateTree(map, visited, i, j);
        count++;
      }
    }
  }
  return count;
}

int main()
{
  vector<vector<int>> map = {{1, 1, 0, 0, 0},
                             {1, 1, 0, 0, 0},
                             {0, 0, 1, 0, 0},
                             {0, 0, 0, 1, 1}};

  cout << noOfIslands(map) << endl;
}