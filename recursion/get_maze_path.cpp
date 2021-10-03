#include<bits/stdc++.h>

using namespace std;

vector<string> get_paths(int sr, int sc, int dr, int dc)
{
    if (sr == dr and sc == dc)
        return {""};
    if (sr > dr or sc > dc)
        return {};

    vector<string> downMove = get_paths(sr + 1, sc, dr, dc);
    vector<string> rightMove = get_paths(sr, sc + 1, dr, dc);

    vector<string> paths;

    for(string s : downMove)
        paths.push_back("D" + s);
    
    for(string s : rightMove)
        paths.push_back("R" + s);

    return paths;
}

int main()
{

    int sr = 0, sc = 0;
    int dr = 2, dc = 1;

    vector<string> ans = get_paths(sr, sc, dr, dc);

    for(string s : ans)
        cout << s << "\t";
    cout << endl;
}                         


/*
Expec
*/