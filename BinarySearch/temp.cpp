#include<bits/stdc++.h>

using namespace std;

bool binarySearch(vector<int> A, int target, int index)
{

    int low = 0, high = A.size() - 1;

    while (low <= high)
    {
        int mid = (low + high) / 2;

        if (A[mid] < target)
            low = mid + 1;

        else
            high = mid - 1;
    }
    //at this point low will be pointing the correct position of target
    if(low > A.size() - 1 or A[low] != target)    return false;
    else 
    {
        if(index != low)    return true;
        if(low < A.size() - 1)  return A[low + 1] == target;
    }
    return false;
}
bool checkIfExist(vector<int> &A)
{
    sort(A.begin(), A.end());
    for (int i = 0; i < A.size(); i++)
    {
        if (binarySearch(A, 2 * A[i], i))
            return true;
    }
    return false;
}

int main()
{
    vector<int> A = {10, 2, 5, 3};
    cout << checkIfExist(A) << endl;
}