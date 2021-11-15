#include<bits/stdc++.h>

using namespace std;
//search insert position with duplicate (return min index)

int getFirstInsertPos(vector<int> A, int target)
{
    int low = 0, high = A.size() - 1;
    //Insert position will be in range [low, high + 1]
    while(low <= high)
    {
        int mid = low + (high - low) / 2;

        if(A[mid] < target)
            low = mid + 1;
        
        else
            high = mid - 1;
    }
    /*
    1. At this point low > high (low == high + 1)
    2. As array is sorted, so we can say that A[high] < target < A[low]
    3. Now we can conclude the correct position of insertion will be low 
    */
    return low;
}

int main()
{
    vector<int> A = {2, 3, 3, 3, 5, 5, 6, 8};
    cout << getFirstInsertPos(A, 3) << endl;
}