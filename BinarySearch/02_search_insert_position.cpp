//return element's index if found else return correct position of insertion
#include <bits/stdc++.h>

using namespace std;

int insertPosition(vector<int> A, int target)
{
    int low = 0, high = A.size() - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;

        if (A[mid] == target)
            return mid;

        else if(A[mid] > target)
            high = mid - 1;
        
        else if(A[mid] < target)
            low = mid + 1;
    }

    return low;
}

int main()
{
    vector<int> A = {1, 3, 5, 6};
    cout << insertPosition(A, 2) << endl;
}

/*
By the dry run of test cases we can see low is always pointing to the correct insertion position of target, so low is the correct position.

*/