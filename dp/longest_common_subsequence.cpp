#include<bits/stdc++.h>

using namespace std;

int lcs(string A, string B)
{
    int x = A.length(), y = B.length();

    int dp[x + 1][y + 1];

    for(int i = 0; i < x + 1; i++)
    {
        for(int j = 0; j < y + 1; j++)
        {
            if(i == 0 or j == 0)
                dp[i][j] = 0;
            
            else if(A[i - 1] == B[j - 1])
                dp[i][j] = 1 + dp[i - 1][j - 1];
            
            else
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
        }
    }
    return dp[x][y];
}

int main()
{
    string A = "ABC";
    string B = "AC";

    cout << lcs(A, B) << endl;
}