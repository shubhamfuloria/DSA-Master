#include <bits/stdc++.h>

using namespace std;

/*
Q. We need to return an element which is greater than both of it's neighbours, for the corner elements
   we only need to check one neightbour, because other neighbour does not exists for them. It corener elemetns
   are smaller than one neighbour, then they are peak.

Aproach: 
1. Our array is not sorted but still we will apply binary search
2. We'll check for mid element, if it is greater than both of it's neighbour (mid - 1 and mid + 1) 
3. If it is, then this is one of the peak, we'll return mid
4. If it is not the peak, then we will move to the side of array where greater (than mid) element is... why ?
    Because, the slope will be increasing in the greater element side of mid, there may be two cases
    1. The slope may keep increasing till the end of array
    2. The slope may fluctuate (decrease) somewhere in between
    in both cases we will have our our peak, in first case the last element will be peak
    in the second case the fluctuation point wll be peak
5. There may or may not peak exist in the other side of greater element (smaller) than mid.
6. We need to be careful while checking the corner elements 
7. For corner cases we check for them before entering the loop
8. Then we can apply binary search on the rest of array (excluding corner cases)
*/

int getPeakIndex(vector<int> &A)
{
    int n = A.size();
    int start = 0, end = n - 1;

    while(start <= end)
    {
        int mid = start + (end - start) / 2;

        if(mid > 0 && mid < n - 1)
        {
            if(A[mid - 1] < A[mid] and A[mid + 1] < A[mid])
                return mid;
            
            else if(A[mid] < A[mid + 1])
                start = mid + 1;
            
            else
                end = mid - 1;
        }
        else
        {

        }

    }
    return -1;
}

int main()
{
    vector<int> A = {3, 4, 3, 2, 1};
    cout << getPeakIndex(A) << endl;
}