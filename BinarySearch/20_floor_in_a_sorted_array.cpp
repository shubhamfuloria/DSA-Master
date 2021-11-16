#include<bits/stdc++.h>

using namespace std;

/*
Floor of x: largest element in array smaller than or equal to x
Things to keep in mind: 
1. the best possible answer would be x itself (if x is present in the array then we will return it's index)
2. We will return target as soon as we find it (A[mid] == target)
3. if(target < A[mid]), we will continue our search in left part
4. if(A[mid] < target), A[mid] is also a candidate answer, we'll update answer and continue our search in right part
   so we can find some other elements which are greater than A[mid], because we need largest element
*/
int getFloor(vector<int> &A, int target)
{
    int start = 0, end = A.size() - 1;
    int ans = -1;

    while(start <= end)
    {
        int mid = start + (end - start) / 2;

        if(target == A[mid])
            return A[mid];
        
        else if(target < A[mid])
            end = mid - 1;
        
        else if(A[mid] < target)
        {
            ans = A[mid];
            start = mid + 1;
        }
    }
    return ans;
}

int main()
{
    vector<int> A = {1, 2, 8, 10, 10, 12, 19};
    cout << getFloor(A, 5) << endl;
}