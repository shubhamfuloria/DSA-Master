#include<bits/stdc++.h>

using namespace std;

void print_maze_path(int sr, int sc, int dr, int dc, string path)
{
    if(sr == dr and  sc == dc)
    {
        cout << path << endl;
        return;
    }
    if(sr > dr or sc > dc)
        return;
    //going to right
    print_maze_path(sr, sc + 1, dr, dc, path + "R");
    //going to down
    print_maze_path(sr + 1, sc, dr, dc, path + "D");

}

int main()
{
    int sr = 0, sc = 0;
    int dr = 2, dc = 2;
    string path;
    print_maze_path(sr, sc, dr, dc, path);
}