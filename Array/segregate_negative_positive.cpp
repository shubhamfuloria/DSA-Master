#include<bits/stdc++.h>

using namespace std;

void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

void segregate(vector<int> & A)
{
    int low = 0, high = A.size() - 1;

    while(low <= high)
    {
        if(A[low] > 0)
            swap(A[low], A[high--]);

        else if(A[high] < 0)
            swap(A[high], A[low++]);
        
        else
            low++, high--;
    }
}

int main()
{
    vector<int> A = {-12, 11, -13, -5, 6, -7, 5, -3, -6};
    
    segregate(A);
    for(auto i : A)
        cout << i << " ";
    cout << endl;
}