#include<bits/stdc++.h>

using namespace std;


/*
Q. You are given an array nums of non-negative integers. nums is considered special if there exists a number x such that 
there are exactly x numbers in nums that are greater than or equal to x.

Notice that x does not have to be an element in nums.

Return x if the array is special, otherwise, return -1. It can be proven that if nums is special, the value for x is unique.
*/


/*
Aproach: 
1. The range of our answer will be [0, sizeOfArray]
2. 
*/

int findFirstInsertPos(vector<int> A, int target)
{
    int low = 0, high = A.size() - 1;

    while( low <= high)
    {
        int mid = low + (high - low) / 2;

        if(A[mid] < target)
            low = mid + 1;
        
        else
            high = mid - 1;
    }
    //At this point low == high + 1 and A[high] < target < A[low]
    //so low is the correct insertion position
    return low;
}
int findNumber(vector<int> A)
{
    //initial search space will be in range [0, sizeOfArray]
    int low = 0, high = A.size();
    sort(A.begin(), A.end());

    while(low <= high)
    {
        int mid = (low + high) / 2;
        
        //now I'll check can mid be our answer
        //for that we need to find no of elements which are greater than or equal to mid
        //if no of elements are equal to mid than our ans is mid

        int noOfEl = A.size() - findFirstInsertPos(A, mid);
        
         if(noOfEl == mid)   
            return mid;
        
        else if(noOfEl > mid) 
            low = mid + 1;
        
        else
            high = mid - 1;
    }
    return -1;
}

int main()
{
    vector<int> A = {3, 6, 7, 7, 0};
    cout << findNumber(A) << endl;
}