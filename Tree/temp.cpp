#include<bits/stdc++.h>

using namespace std;

vector<vector<int>> all_permutations(vector<int> A)
{
    
}

int main()
{
    vector<int> A = {1, 2, 3};
    vector<vector<int>> p = all_permutations(A);

    for(auto i : p)
    {
        for(auto j : i)
            cout << j << "  ";
        cout << endl;
    }
}