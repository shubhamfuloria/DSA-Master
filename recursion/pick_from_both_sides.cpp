#include <bits/stdc++.h>

using namespace std;

int solve(vector<int> A, int K, int start, int end)
{
    if (K == 0)
        return 0;

    //choosing first element
    int sans1 = A[start] + solve(A, K - 1, start + 1, end);
    //choosing second element
    int sans2 = A[end] + solve(A, K - 1, start, end - 1);

    return max(sans1, sans2);

}
int maximumSum(vector<int> A, int B)
{
    int max_sum = 0;
    int start = 0;
    int end = A.size() - 1;
    return solve(A, B, start, end);
}

int main()
{
    vector<int> A = {5, -2, 3, 2, 1};
    int B = 3;
    cout << maximumSum(A, B) << endl;
}