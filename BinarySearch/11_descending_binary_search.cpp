#include <bits/stdc++.h>

using namespace std;

int search(vector<int> A, int target)
{
    int start = 0, end = A.size() - 1;

    //why not start < end ? :=> because then we'll miss one element , when start == end there is one element left to be checked
    //if we don't write equality sign then we will miss that last element
    while (start <= end)
    {   
        int mid = start + (end - start) / 2; //to avoid integer overflow

        if(target == A[mid])
            return mid;
        
        else if(target < A[mid]) //that means our target will lie on the right side of mid, because array is sorted in reverse manner
            start = mid + 1;
        
        else 
            end = mid - 1;
    }
    return -1;
}

int main()
{
    //array is given in reverse sorted array, search the target element
    vector<int> A = {10, 8, 6, 5, 3, 2};
    cout << search(A, 11) << endl;
}

/*
Tip: Always write target on the left side of condition check to get clear picture
*/