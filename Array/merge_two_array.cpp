#include <bits/stdc++.h>

using namespace std;

void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

void merge(vector<int>& A, int m, vector<int> &B, int n)
{
    for (int i = 0; i < m; i++)
    {
        if (A[i] > B[0])
        {
            swap(A[i], B[0]);

            //insert B[0] at correct position
            int j = 0;

            while (j < n - 1 and B[j] > B[j + 1])
            {
                swap(B[j], B[j + 1]);
                j++;
            }
        }
    }
}

int main()
{
    vector<int> arr1 = {2, 3, 7, 8, 14, 16};
    vector<int> arr2 = {5, 8};

    merge(arr1, 6, arr2, 2);

    for (int i = 0; i < 6; i++)
        cout << arr1[i] << " ";

    for (int i = 0; i < 2; i++)
        cout << arr2[i] << " ";

    cout << endl;
}