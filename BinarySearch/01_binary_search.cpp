#include <bits/stdc++.h>

using namespace std;

/*
Binary Search : Binary Search is a algorithms which makes searching in an array faster. 
Conditions for binary Search : 
-> Array should be in sorted manner 

Time Complexity => O(logn) 
*/
//____________________________________________________________________________________________
/*
What we do in binary search algorithm : 
We point low to start of the array and high 
then we just reduce our search space until we get the target element .
reducing search space is easy becuase our array is sorted. 

 
*/

int binarySearch(vector<int> A, int target)
{
    int low = 0, high = A.size() - 1;

    while (low <= high) //condition will terminate when low > high, ie. there will be no element left in the search space
    {
        int mid = (low + high) / 2;

        if (A[mid] == target)
            return mid;
        else if (A[mid] < target)
            low = mid + 1;
        else
            high = mid - 1;
    }
    /*
    1. At this point we can say that low > high , Isn't it ?
    2. We can also say that low == high + 1
    3. As target is not present in our array, so at this point we can say A[high] < target < A[low]
    4. And now we can clearly see that the insert position of our element will be low
    */

    return -1;
}int main()
{
    vector<int> A = {2, 3, 7, 12, 45, 90};
    cout << binarySearch(A, 90) << endl;
}
