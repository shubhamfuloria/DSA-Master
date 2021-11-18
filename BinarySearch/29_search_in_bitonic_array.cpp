#include <bits/stdc++.h>

using namespace std;
/*
Aproach: 
1. If the array is bitonic, then till the peak, it will be increasing then decreasing
2. We can simply find the peak element, then apply binary search on both side of peak
*/

int bSearchASC(vector<int> &A, int start, int end, int target)
{
    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (A[mid] == target)
            return mid;

        else if (target < A[mid])
            end = mid - 1;

        else
            start = mid + 1;
    }
    return -1;
}
int bSearchDES(vector<int> &A, int start, int end, int target)
{
    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (A[mid] == target)
            return mid;

        else if (target < A[mid])
            start = mid + 1;

        else
            end = mid - 1;
    }
    return -1;
}
int getPeak(vector<int> &A)
{
    int start = 1, end = A.size() - 2;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (A[mid - 1] < A[mid] and A[mid + 1] < A[mid])
            return mid;

        else if (A[mid] < A[mid + 1])
            start = mid + 1;

        else
            end = mid - 1;
    }
    return -1;
}
int search(vector<int> &A, int target)
{
    int p = getPeak(A);
    int left_ans = bSearchASC(A, 0, p, target);
    int right_ans = bSearchDES(A, p + 1, A.size() - 1, target);

    return left_ans > right_ans ? left_ans : right_ans;
}
int main()
{
    vector<int> A = {5, 6, 7, 8, 9, 10, 3, 2, 1};
    cout << search(A, 10) << endl;
}