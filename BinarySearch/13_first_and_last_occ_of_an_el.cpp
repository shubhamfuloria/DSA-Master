#include<bits/stdc++.h>

using namespace std;

/*
Aproach:
1. We apply normal binary search but we do not return the target's index as soon as we find it .
2. We save the index of target element in some variable(ans)
3. If we need to find first occurance then we continue our search in left half.
4. else we continue our search in right half
5. And we keep updating the ans variable 
6. At the end we'll be having first or last occurance of target :)
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

vector<int> solve(vector<int> &A, int target)
{
    int first = getFirstOccurance(A, target);
    int last = getLastOccurance(A, target);

    return {first, last};
}
int main()
{
    vector<int> A = {2, 2};
    vector<int> ans = solve(A, 3);
    for(int i : ans)
        cout << i << " ";
    cout << endl;
}

/*
using ans variable the code looks cleaner and we need to think less about boundaries and edge cases
*/