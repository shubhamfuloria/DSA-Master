#include <bits/stdc++.h>

using namespace std;

void insertionSort(vector<int> &A)
{
    int n = A.size();

    int i, key, j;
    for(i = 1; i < n; i++)
    {
        key = A[i];
        j = i - 1;

        while(j >= 0 and A[j] > key)
        {
            A[j + 1] = A[j];
            j--;
        }
        A[j + 1] = key;
    }


}

int main()
{
    vector<int> A = {7, 6, 8, 4, 9, 3, 0};
    insertionSort(A);
}