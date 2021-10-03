#include <bits/stdc++.h>

using namespace std;

vector<string> get_maze_paths(int sr, int sc, int dr, int dc)
{
    if(sr == dr and sc == dc)
        return {""};
    
    if(sr > dr or sc > dc)
        return {};

    vector<string> paths;
    for(int ms = 1; ms <= dc - sc; ms++)
    {
        vector<string>hPaths = get_maze_paths(sr, sc + ms, dr, dc);

        for(string s : hPaths)
            paths.push_back("h" + to_string(ms) + s);
    }

    //vertical moves
    for (int ms = 1; ms <= dr - sr; ms++)
    {
        vector<string> vPaths = get_maze_paths(sr + ms, sc, dr, dc);

        for (string s : vPaths)
            paths.push_back("v" + to_string(ms) + s);
    }

    //diagonal moves

    for (int ms = 1; ms <= dc - sc and ms <= dr - sr; ms++)
    {
        vector<string> dPaths = get_maze_paths(sr + ms, sc + ms, dr, dc);

        for (string s : dPaths)
            paths.push_back("d" + to_string(ms) + s);
    }

    return paths;
}

int main()
{
    int sr = 1, sc = 1;
    int dr = 4, dc = 4;

    vector<string> ans = get_maze_paths(sr, sc, dr, dc);

    for(string s : ans)
        cout << s << "\t";
    cout << endl;
}