#include <bits/stdc++.h>

using namespace std;

bool isValid(vector<int> A, int target, int mid)
{
    int total_wood = 0;
    for(int i = 0; i < A.size(); i++)
    {
        if(A[i] >= mid)
            total_wood += A[i] - mid;
    }
    return total_wood >= target;
}
int solve(vector<int> &A, int B) 
{
    int start = 0, end = INT_MIN;

    for(int i = 0; i < A.size(); i++)
        end = max(end, A[i]);
    int max_height = -1;
    while(start <= end)
    {
        int mid = start + (end - start) / 2;

        if(isValid(A, B, mid))
        {
            max_height = mid;
            start = mid + 1;
        }
        else
            end = mid - 1;
    }
    return max_height;
}

int main()
{
    vector<int> A = {5, 42, 40, 26, 46};
    cout << solve(A, 20) << endl;
}