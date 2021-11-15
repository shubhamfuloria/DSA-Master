#include<bits/stdc++.h>

using namespace std;

int search(vector<int> &A, int target)
{
    int start = 0, end = A.size();

    while(start <= end)
    {
        int mid = start + (end - start) / 2;

        if(target == A[mid])
            return mid;
        
        else if(target > A[mid])
        {
            if(A[0] < A[1]) //that means array is sorted in ascending order
                start = mid + 1;
            else //array is sorted in descending order
                end = mid - 1;
        }

        else
        {
            if(A[0] < A[1]) //that means array is sorted in ascending order
                end = mid - 1;
            else //array is sorted in descending order
                start = mid + 1;
        }
    }
    return -1;
}

int main()
{
    //Sorted array is given but order of soriting (ascending or descending) is not known
    vector<int> A = {2, 3, 5, 6, 8, 10};
    cout << search(A, 3) << endl;
}