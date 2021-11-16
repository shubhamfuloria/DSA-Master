#include<bits/stdc++.h>

using namespace std;

/*
Approach: 
1. We can apply binary search here, as the array is sorted
2. But we do not know the upper bound of our search space as the array is infinite 
3. So we will try to find upper bound
*/
int bSearch(int A[], int low, int high)
{
    int ans = high;// I am sure that element in high index is 1, so this also is our answer candidate, but we will try to find minimum index

    while(low <= high)
    {
        int mid = low + (high - low) / 2;

        if(A[mid] == 0)
            low = mid + 1;
        
        else if(A[mid] == 1)
        {
            ans = mid;
            high = mid - 1;
        }
    }
    return ans;
}
int getIndex(int A[])
{
    int start = 0, end = 1;
    while(A[end] == 0)
    {
        start = end;
        end *= 2;
    }
    //at this point end will be pointing to 1 which may or may not be the first one 
    //so we will apply binary search to find first 1
    return bSearch(A, start, end);
}

int main()
{
    int A[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1,1 ,1 ,1 ,1 ,1 ,1, 1, 1};
    cout << getIndex(A) << endl;
}