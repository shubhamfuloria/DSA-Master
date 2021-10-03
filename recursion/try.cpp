#include <bits/stdc++.h>

using namespace std;

int profit(vector<int> &a, int i, int j, int b, int dp[][100001])
{
    if (b == 0)
        return 0;

    if (dp[i][j] != 0)
        return dp[i][j];

    int opt1 = a[i] + profit(a, i + 1, j, b - 1, dp);
    int opt2 = a[j] + profit(a, i, j - 1, b - 1, dp);

    return dp[i][j] = max(opt1, opt2);
}

int solve(vector<int> &A, int B)
{
    int n = A.size();
    int dp[100001][100001];
    for (int i = 0; i < 100001; i++)
    {
        cout << "Hello" << endl;
    }

    return 0;
}

int main()
{
    vector<int> A = {5, -2, 3, 1, 2};
    int B = 3;

    cout << solve(A, B) << endl;
}