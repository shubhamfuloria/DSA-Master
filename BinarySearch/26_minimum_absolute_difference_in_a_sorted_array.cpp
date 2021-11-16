#include<bits/stdc++.h>

using namespace std;
//Q. We need to return minimum absolute difference with key in a sorted array 

/*
Approach:
1. As the array is sorted, we will apply binary search
2. minimum possible answer will be 0, if key itself is present in the sorted array
3. If key is not present : Minimum difference will be obtained by subtracting with left_neightbour or right_neighbour
*/

int solve(vector<int> &A, int key)
{
    int start = 0, end = A.size() - 1;
    //I'll find floor of key
    int ans = -1;
    while(start <= end)
    {
        int mid = start + (end - start) / 2;

        if(A[mid] <= key)
        {
            ans = mid;
            start = mid + 1;
        }
        else if(key < A[mid])
            end = mid - 1;
    }
    //at this point ans will be pointing to floor value of key

    int left_neighbour = abs(A[ans] - key);
    int right_neighbour = INT_MAX;

    if(ans + 1 < A.size())
        right_neighbour = abs(A[ans + 1] - key);

    return left_neighbour < right_neighbour ? left_neighbour : right_neighbour;
}

int main()
{
    vector<int> A = {1, 3, 8};
    cout << solve(A, 12) << endl;
}