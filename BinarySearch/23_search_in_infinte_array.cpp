#include<bits/stdc++.h>

using namespace std;

/*
Q. An array of unknown size (infinite) is given, and we need to find an element in this array

Approach: 
1. We need to think about how we can get the upper bound of our search space, so we can apply binary search here?
2. We use this simple technique to find the search space
   low = 0, high = 1
   while(target > A[high])
   {
       low = high;
       high *= 2
   }
   at this point we will be having our search space 
*/
int bSearch(int start, int end, int target, int A[])
{
    while(start <= end)
    {
        int mid = start + (end - start) / 2;

        if(target == A[mid])
            return mid;
        
        else if(target < A[mid])
            end = mid - 1;
        
        else
            start = mid + 1;
    }
    return -1;
}

int searchElement(int A[], int target)
{
    //finding the search space
    int low = 0, high = 1;

    while(target > A[high])
    {
        low = high;
        high *= 2;
    }
    //at this point target will be lesser than high, so we got our search space, now we can apply binary search here :)
    return bSearch(low, high, target, A);
}

int main()
{
    int A[] = {1, 2, 3, 6, 7, 8, 12, 13, 17, 23, 25, 29, 230, 456, 678};
    cout << searchElement(A, 7) << endl;
}