#include <bits/stdc++.h>

using namespace std;

string reverse(string s)
{
    int n = s.length() - 1;
    string r;

    while (n >= 0)
        r += s[n--];

    return r;
}

string lps(string A, string B)
{
    int x = A.length(), y = B.length();

    int dp[x + 1][y + 1];

    for (int i = 0; i < x + 1; i++)
    {
        for (int j = 0; j < y + 1; j++)
        {
            if (i == 0 or j == 0)
                dp[i][j] = 0;

            else if (A[i - 1] == B[j - 1])
                dp[i][j] = 1 + dp[i - 1][j - 1];

            else
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
        }
    }
    int i = A.length(), j = B.length();
    string r = "";
    while (i > 0 and j > 0)
    {
        if (A[i - 1] == B[j - 1])
        {
            r += A[i - 1];
            i--, j--;
        }
        else
        {
            if (dp[i - 1][j] > dp[i][j - 1])
                i--;
            else
                j--;
        }
    }
    return reverse(r);
}

int main()
{
    string s = "geeksforgeeks";
    string r = reverse(s);

    cout << lps(s, r) << endl;
}