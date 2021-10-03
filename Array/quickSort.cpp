#include <bits/stdc++.h>

using namespace std;

void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

int partition(vector<int>& A, int low, int high)
{
    int pivot = A[low]; //First el as pivot element
    int i = low + 1;
    int j = high;

    while (i < j)
    {
        while (A[i] < pivot)
            i++;
        while (A[j] > pivot)
            j--;

        if (i < j)
            swap(A[i], A[j]);
    }
        swap(A[low], A[j]);
    return j;
}
void QuickSort(vector<int> &A, int l, int h)
{
    if(l < h)
    {
        int j = partition(A, l, h);
        QuickSort(A, l, j - 1);
        QuickSort(A, j + 1, h);
    }
}

int main()
{
    vector<int> A = {10, 16, 8, 12, 15, 6, 3, 9, 5};
    QuickSort(A, 0, A.size() - 1);

    for(int i : A)
        cout <<  i << " ";
    cout << endl;
}