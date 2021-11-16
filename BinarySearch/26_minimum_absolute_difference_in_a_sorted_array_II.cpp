#include <bits/stdc++.h>

using namespace std;

/*
Things to keep in mind:
1. If we search an element in a sorted array which is not present in the array, then after the while loop
   high will be pointing to floor value of target , and low will be pointing to ceil value of target.

2. If we search an element in a sorted array which is not present in the array, and is greater than all the 
   elements in the array, then after the while loop, high will be pointing to last index of the array, and 
   low will be pointing to last index + 1 (which is an invalid index)

3. If we search an element in a sorted array which is not present in the array, and is lesser than all the 
   elements in the array, then after the while loop, low will be pointing to first index of the array, and 
   high will be pointing to -1 index (which is invalid) 
*/

int getMinDiff(vector<int> &A, int target)
{
    int start = 0, end = A.size() - 1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (target == A[mid])
            return A[mid];

        else if (A[mid] < target)
            start = mid + 1;

        else if (target < A[mid])
            end = mid - 1;
    }
    //at this point start and end will be pointing to floor and ceil index of element (or -1 and n(size of array))
    if (start == A.size()) //that means there is no value which is greater than target
        return abs(A[end] - target);

    else if (end == -1) // that means there is no value which is lesser than target
        return abs(A[start] - target);

    //if our code reaches here, then we can assure there exists a floor and ceil value of target at valid index
    return abs(A[start] - target) > abs(A[end] - target) ? abs(A[end] - target) : abs(A[start] - target);
}

int main()
{
    vector<int> A = {1, 3, 8, 10, 15};
    cout << getMinDiff(A, 12) << endl;
}