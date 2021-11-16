#include <bits/stdc++.h>

using namespace std;
//Ceil of x:- Smallest element in the array that is greater than x

int getSeil(vector<int> &A, int target)
{
    int start = 0, end = A.size() - 1;
    int ans = -1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (target <= A[mid])
        {
            ans = A[mid];
            end = mid - 1;
        }

        else if (A[mid] < target)
            start = mid + 1;
    }
    return ans;
}

int main()
{
    vector<int> A = {1, 2, 8, 10, 11, 12, 19};
    cout << getSeil(A, 20) << endl;
}