#include <bits/stdc++.h>

using namespace std;

void print_subset(vector<int> A, vector<int>&out, int index)
{
    if(index >= A.size())
    {
        for(auto i : out)
            cout << i << " ";
        cout << endl;
        return;
    }
    
    //not included
    print_subset(A, out, index + 1);

    //included
    out.push_back(A[index]);
    print_subset(A, out, index + 1);
    out.clear();
}

int main()
{
    vector<int> A = {1, 2, 3};
    vector<int> x;
    print_subset(A, x, 0);
}