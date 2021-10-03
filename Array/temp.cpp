#include <bits/stdc++.h>

using namespace std;

void swap(int &A, int &B)
{
    int temp = A;
    A = B;
    B = temp;
}
vector<int> nextPermutation(vector<int> &A)
{


    const int N = A.size() - 1;

    int i = N - 1;

    while(A[i] > A[i + 1] and i >= 0)
        i--;

    if(i < 0)
    {
        reverse(A.begin(), A.end());
        return A;
    }
    
    //find smallest possible element which is greater then A[i] and after ith index

    int j = N;
    while(A[j] < A[i] and j > i)
        j--;


    swap(A[i], A[j]);
    reverse(A.begin() +  i + 1, A.end());

    return A;
}

int main()
{
    vector<int> A = {5, 1, 1};
    A = nextPermutation(A);
    for(auto i : A)
        cout <<  i << " ";
    cout << endl;


}