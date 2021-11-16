#include <bits/stdc++.h>

using namespace std;

//Q. Given a binary sorted array find the index of first 1

int getIndex(vector<int> &A)
{
    int start = 0, end = A.size() - 1;
    int ans = -1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if(A[mid] < 1)
            start = mid + 1;
        
        else if(1 <= A[mid])
        {
            ans = mid;
            end = mid - 1;
        }
    }
    return ans;
}

int main()
{
    vector<int> A = {0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1};
    cout << getIndex(A) << endl;
}