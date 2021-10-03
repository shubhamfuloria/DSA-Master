#include <bits/stdc++.h>

using namespace std;

int first_index_of_occurance(vector<int> A, int target, int index)
{
    if (index == A.size())
        return -1;

    if (A[index] == target)
        return index;

    int temp = first_index_of_occurance(A, target, index + 1);
    // if(A[index] == target)
    //     return index;
    return temp;
}

int main()
{
    vector<int> A = {10, 15, 20, 34, 56, 34, 34};
    cout << first_index_of_occurance(A, 100, 0);
    cout << endl;
}