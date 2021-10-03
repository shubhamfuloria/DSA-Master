#include <bits/stdc++.h>

using namespace std;

int LastIndex(vector<int> A, int target, int index)
{
    if (index == A.size())
        return -1;

    int temp = LastIndex(A, target, index + 1);

    if (temp == -1)
    {
        if (A[index] == target)
            return index;
        else
            return -1;
    }
    else
        return temp;
}

int main()
{
    vector<int> A = {1, 2, 3, 2, 3};
    cout << LastIndex(A, 2, 0) << endl;
}

/*
Expectation from LastIndex(A, 2, 0):
To find the last occurance of 2 in the array from index 0 to n - 1(last index)


Establishing the Faith:
LastIndex(A, 2, 1) -> this function already know how to find the last occurance of 2 in the array from index 1 to n - 1
Just have blind faith in this function

Link:
LastIndex(A, 2, 1) may return any index or -1 
if it returns any index then that is our answer
otherwise there is no occurance of 2 in the array from index 1 to n - 1
Now I have to check the first index if it contain 2 or not 
if it does then return that index
otherwise return -1
*/