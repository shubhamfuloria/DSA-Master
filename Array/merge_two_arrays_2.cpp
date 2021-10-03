#include<bits/stdc++.h>

using namespace std;

void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

void merge(vector<int> &A, vector<int> &B)
{
    int m = A.size(), n = B.size();
    int gap = (m + n) / 2;
    if(m + n % 2 != 0)
        gap = (m + n + 1) / 2;

    int p1, p2;


    while(gap >= 1)
    {
        
    }




}

int main()
{
    vector<int> A = {1, 4, 7, 8, 10};
    vector<int> B = {2, 3, 9};

    merge(A, B);

    for(auto i : A)
        cout << i << " ";
    for(auto i : B)
        cout << i << " ";

    cout << endl;
}