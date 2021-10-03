#include<bits/stdc++.h>

using namespace std;

string reverse(string s)
{
    int i = s.length() - 1;
    string r = "";
    while(i >= 0)
        r += s[i--];
    return r;
}

string print_lc_substring(string A, string B)
{
    int ans = 0;
    int n = A.length(), m = B.length();
    int dp[n + 1][m + 1];
    int max_i, max_j;
    for (int i = 0; i < n + 1; i++)
    {
        for (int j = 0; j < m + 1; j++)
        {
            if (i == 0 or j == 0)
                dp[i][j] = 0;

            else if (A[i - 1] == B[j - 1])
            {
                dp[i][j] = 1 + dp[i - 1][j - 1];
                if(ans < dp[i][j])
                {
                    ans = dp[i][j];
                    max_i = i;
                    max_j = j;
                }
            }
            else
                dp[i][j] = 0;
        }
    }

    int i = max_i, j = max_j;
    string r;
    while(true)
    {
        if(A[i - 1] == B[j - 1])
        {
            r += A[i - 1];
            i--;
            j--;
        }
        else
            break;
    }    
    return reverse(r);
}

int main()
{
    string A = "ABCDGH";
    string B = "ACDGHR";

    cout << print_lc_substring(A, B) << endl;
}