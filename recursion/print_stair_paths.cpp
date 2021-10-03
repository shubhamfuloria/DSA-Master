#include<bits/stdc++.h>

using namespace std;

void print_stair_paths(int n, string paths)
{
    if(n == 0)
    {
        cout << paths << endl;
        return;
    }
    if(n < 0)
        return;

    //climb 1
    print_stair_paths(n - 1, paths + "1");
    //climb 2
    print_stair_paths(n - 2, paths + "2");
}
int main()
{
    int n = 4;
    string paths;
    print_stair_paths(n, paths);
}