#include<bits/stdc++.h>

using namespace std;

/*
Q. Return the maximum element in the first increasing then decreasing array

*/

int search(vector<int> &A) 
{
    int start = 0, end = A.size() - 1;

    while(start <= end)
    {
        int mid = start + (end - start) / 2;
    
        if(A[mid - 1] < A[mid] and A[mid + 1] < A[mid])
            return mid;
        
        else if(A[mid] < A[mid + 1])
            start = mid + 1;
        
        else if(A[mid] < A[mid - 1])
            end = mid - 1;
    }
    return -1;
}

int main()
{
    vector<int> A = {10, 20, 15, 2, 23, 90, 67};
    cout << search(A) << endl;
}