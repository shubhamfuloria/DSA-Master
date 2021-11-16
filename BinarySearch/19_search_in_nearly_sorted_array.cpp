#include<bits/stdc++.h>

using namespace std;

/*
Question: 
    After sorting some element has been swapped with adjacent elements
    A[i] may be present at A[i - 1] or A[i] or A[i + 1]
*/

/*
Approach: 
1. We'll apply simple binary search here
2. We'll check for extra cases in mid (mid - 1 and mid + 1), because mid may have been swapped with adjacent
3. we'll discard the half of array by (mid - 2 or mid + 2), becuase we have already checked for mid - 1 and mid - 2

Things to keep in mind: 
1. All elements before mid - 2 (including) will be lesser than mid
2. All elements after mid + 2 (including) will be greater than mid
*/

int search(vector<int> &A, int target)
{
    int start = 0, end = A.size() - 1;
    while(start <= end)
    {
        int mid = start + (end - start) / 2;

        if(A[mid] == target) 
            return mid;
        
        else if(mid - 1 >= 0 and A[mid - 1] == target) 
            return mid - 1;
        
        else if(mid + 1 < A.size() and A[mid + 1] == target)
            return mid + 1;

        else if(target < mid)
            end = mid - 2;
        
        else
            start = mid + 2;
    }
    return -1;
}

int main()
{
    vector<int> A = {10, 3, 40, 20, 80, 70};
    cout << search(A, 71) << endl;
}