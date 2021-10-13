#include<bits/stdc++.h>

using namespace std;

//faith method on permutations of an array

vector<vector<int>> get_all_permutations(vector<int> A, int low, int high)
{
    if(low > high)
        return {{}};

    int first = A[low];
    vector<vector<int>> sans = get_all_permutations(A, low + 1, high);
    vector<vector<int>> f_ans;


    for(auto v : sans)
    {
        int N = v.size();
        for(int i = 0; i <= N; i++)
        {
            vector<int> temp = v;
            temp.insert(temp.begin() + i, first);
            f_ans.push_back(temp);
        }
    }
    return f_ans;
}
int main()
{
    vector<int> A = {1, 2, 3};
    vector<vector<int>> permutations = get_all_permutations(A, 0, A.size() - 1);

    for(vector<int> v : permutations)
    {
        for(int el : v)
            cout << el << "  ";
        cout << endl; 
    }
}