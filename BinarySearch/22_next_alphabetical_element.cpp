#include <bits/stdc++.h>

using namespace std;

/*
Ques. We need to return the smallest character which is larger than target in the array.

Aproach:

1. If we find the target character in our array itself then right adjacent of that character will be our answer (if exists)
2. If A[mid] < target, then we will discard left half of the array
3. If target < A[mid], then mid can be candidate answer, so we will save it in some variable, but we need smallest element, so we
   will continue our search in left half
4. What if array contains duplicate elements? then our first point will not be valid .
5. Then even after finding the target element we will continue our search in right half of the array
6. we can combine A[mid] < target and A[mid] == target in one condition also 
7. We can initially point ans variable to index 0 so that even if we don't find any candidate then the answer will be cyclically 0th element
*/
char nextAlphaEl(vector<char> &A, char target)
{
    int start = 0, end = A.size() - 1;
    int ans = 0, n = A.size();
    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (target < A[mid])
        {
            ans = mid;
            end = mid - 1;
        }
        else if (A[mid] <= target)
            start = mid + 1;
    }
    return A[ans];
}

int main()
{
    vector<char> A = {'c', 'f', 'j'};
    cout << nextAlphaEl(A, 'k') << endl;
}