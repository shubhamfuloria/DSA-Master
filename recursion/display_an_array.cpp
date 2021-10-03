#include<bits/stdc++.h>

using namespace std;

void print_array(vector<int> A, int n)
{
    if(n == 0)
        return;
        
    print_array(A, n - 1);
    cout << A[n -1] << "\t";
}

int main()
{
    vector<int> A = {10, 20, 30, 40, 50};
    print_array(A, 5);
    cout << endl;
}