#include <bits/stdc++.h>

using namespace std;

/*
Binary Search : Binary Search is a algorithms which makes searching in an array faster. 
Conditions for binary Search : 
-> Array should be in sorted manner 

Time Complexity => O(logn) 
*/

int binarySearch(vector<int> A, int target)
{
    int low = 0, high = A.size() - 1;

    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (A[mid] == target)
            return mid;

        else if (A[mid] > target)
            high = mid - 1;
            
        else
            low = mid + 1;
    }
    return -1;
}
int main()
{
    vector<int> A = {2, 3, 7, 12, 45, 90};

    cout << binarySearch(A, 100) << endl;
}