#include<bits/stdc++.h>

using namespace std;

void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

void reverse(vector<int> &A, int low)
{
    int high = A.size() - 1;

    while(low < high)
        swap(A[low++], A[high--]);
}
vector<int> get_next_permutation(vector<int> A)
{
    int n = A.size() - 1;
    int i = n - 1;
    while(A[i] > A[i + 1] and i >= 0)
        i--;
    
    if(i < 0)
    {
        reverse(A.begin(), A.end());
        return A;
    }
    
    int j = n; 

    while(A[j] < A[i] and j >= 0)
        j--;
    
    swap(A[i], A[j]);

    reverse(A, i + 1);
    return A;
}


int main()
{
    vector<int> A = {1, 4, 2, 3, 5};

    vector<int> ans = get_next_permutation(A);

    for(auto i : ans)
        cout << i;
    cout << endl;
}