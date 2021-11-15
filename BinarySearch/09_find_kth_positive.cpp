#include<bits/stdc++.h>

using namespace std;

int findKthPositive(vector<int> &arr, int k)
{
    int n = arr.size();
    //base cases
    if(k < arr[0])
        return k;
    
    else if(k > arr[n - 1])
    {
        int noMissingBeforeLastEl = arr[n - 1] - n;
        return arr[n - 1] + (k - noMissingBeforeLastEl);
    }


    int low = 0, high = arr.size() - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;

        int missingNumbers = arr[mid] - (mid + 1);

        if(missingNumbers < k)
            low = mid + 1;
        else
            high = mid - 1;
    }

    return arr[high] + (k - (arr[high] - (high + 1)));
}
int main()
{
    vector<int> A = {1, 3};
    cout << findKthPositive(A, 5) << endl;
}