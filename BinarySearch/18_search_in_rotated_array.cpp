#include <bits/stdc++.h>

using namespace std;
//we can assume array contains no duplicates
int bSearch(vector<int> &A, int low, int high, int target)
{
    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (target == A[mid])
            return mid;

        else if (target > A[mid])
            low = mid + 1;

        else
            high = mid - 1;
    }
    return -1;
}

int getMinIndex(vector<int> A)
{
    int start = 0, end = A.size() - 1;
    int n = A.size();

    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        int prev = (n + mid - 1) % n;

        if (A[prev] > A[mid])
            return mid;

        else if (A[0] > A[mid])
            end = mid - 1;
        /*
        in the above condition if A[0] == A[mid], that means our mid is pointing to first index
        that first index does not contain minimum element, else first condition should've already detected that.
        so we will move to the right side of the array ie start = mid + 1 in case A[0] == A[mid]
        */

        else
            start = mid + 1;
    }
    return 0;
}

int search(vector<int> &nums, int target)
{
    int min_index = getMinIndex(nums);
    int n = nums.size();

    if(target > nums[n - 1])
        return bSearch(nums, 0, min_index - 1, target);
    else
        return bSearch(nums, min_index, n - 1, target);
}

int main()
{
    vector<int> A = {4, 5, 6, 7, 0, 1, 2};
    cout << search(A, 0) << endl;
}