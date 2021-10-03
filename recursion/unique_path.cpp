#include<bits/stdc++.h>

using namespace std;

int dp[101][101];

int get_unique_paths(int currR, int currC, int m, int n)
{
    if(currR == m || currC == n)
        return 0;
    
    if(currR == m - 1 and currC == n - 1)
        return 1;

    if(dp[currR][currC] != -1)
        return dp[currR][currC];

    //move down 
    int down = get_unique_paths(currR + 1, currC, m, n);
    //move right 
    int right = get_unique_paths(currR, currC + 1, m, n);
    
    return dp[currR][currC] = down + right;
}

int main()
{
    int m = 3, n = 2;
    memset(dp, -1, sizeof(dp));
    cout << get_unique_paths(0, 0, m, n) << endl;
}