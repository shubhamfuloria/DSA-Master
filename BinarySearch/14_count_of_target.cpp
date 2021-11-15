#include <bits/stdc++.h>

using namespace std;
/*
Approach:
1. I'll search the first occurance of target using binary search 
2. I'll search the last occurance of target using binary search
3. Then I'll be having count (last_occ - first_occ + 1)
*/
int getFirstOccurance(vector<int> &A, int target)
{
    int start = 0, end = A.size() - 1;
    int ans = -1;

    while(start <= end)
    {
        int mid = start + (end - start) / 2;

        if(target == A[mid])
        {
            ans = mid;
            //we'll continue our search in the left half, because we need first occurance of target
            end = mid - 1;
        }
        else if(target < A[mid])
            end = mid - 1;
        else
            start = mid + 1;
    }
    return ans;
}
int getLastOccurance(vector<int> &A, int target)
{
    int start = 0, end = A.size() - 1;
    int ans = -1;

    while(start <= end)
    {
        int mid = start + (end - start) / 2;

        if(target == A[mid])
        {
            ans = mid;
            //we'll continue our search in the right half, because we need first occurance of target
            start = mid + 1;
        }
        else if(target < A[mid])
            end = mid - 1;
        else
            start = mid + 1;
    }
    return ans;
}

int count(vector<int> & A, int target)
{
    int first = getFirstOccurance(A, target);
    int last = getLastOccurance(A, target);
    return last - first + 1;
}

int main()
{
    vector<int> A = {2, 4, 10, 10, 10, 15, 20};
    cout << count(A, 10) << endl;
}