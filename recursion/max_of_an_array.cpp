#include <bits/stdc++.h>

using namespace std;

int get_max(vector<int> A, int index)
{
    if (index == A.size())
        return INT_MIN;

    int misa = get_max(A, index + 1);
    return max(A[index], misa);
}

int main()
{
    vector<int> A = {5, 18, 19, 14, 13};
    cout << get_max(A, 0) << endl;
}

/*
Expectation from get_max(A, 0):
It will return maximum of array from index 0 to index n (length of array)

Establishing Faith in our recursive call:
get_max(A, 1) -> this will return maximum of array from index 1 to n
It is our faith . The function already know how to do that . We don't need worry about that
Faith should be complete , otherwise it won't work.
Function p bharosa rakh beta :P

Link: faith + expectation
At last we can compare A[0] with misa(max in smaller array) and return the maximum;
*/