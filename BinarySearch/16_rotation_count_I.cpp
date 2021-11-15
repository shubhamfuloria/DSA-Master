#include <bits/stdc++.h>

using namespace std;
/*
Note: Array is right rotated

Things to keep in mind: 

1. Every element in a sorted (non rotated) array , is greater than it's left neighbour element.
2. If we want to find no of rotations then it will be index of minimum element.
3. If array is rotated then the minimum element will not be greater than it's left neighbour element.
4. Minimum element will be lesser than it's left, all other elements will be greater than their left.
5. If we calculate mid in a rotated sorted array, then one half of array will be sorted other will be unsorted.
6. We can check sorted/unsorted part just by comparing mid with first/last element (respectively).
7. Then minimum element will always lie in the unsorted part.
*/
int getRotationCount(vector<int> &A)
{

    int start = 0, end = A.size() - 1;
    int n = A.size();
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        int prev = (n + mid - 1) % n; //it will be cyclic left of mid element

        if (A[prev] > A[mid])
            return mid;

        else if (A[0] > A[mid]) //our left half of array is unsorted
            end = mid - 1;

        else //our right half will be unsorted
            start = mid + 1;
    }
    return 0;
}

int main()
{
    vector<int> A = {5, 1, 2, 3, 4};
    cout << getRotationCount(A) << endl;
}