#include<bits/stdc++.h>

using namespace std;

void print_rev(vector<int> A, int index)
{
    if(index == A.size())
        return;

    print_rev(A, index + 1);
    cout << A[index] << "\t";
}

int main()
{
    vector<int> A = {10, 20, 30, 40, 50};
    print_rev(A, 0);
    cout << endl;
}

/*
Expectations from print_rev(A, i):
to print array in reverse order

Establish Faith in print_rev(A, i + 1):
if I call print_rev(A, i + 1).. It will print reversed array from i + 1 till length

Now link the expectation and faith
*/