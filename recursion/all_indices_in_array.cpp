#include <bits/stdc++.h>

using namespace std;

vector<int> solve(vector<int> A, int index, int target)
{
    if(index == A.size())
        return {};

    vector<int> ans = solve(A, index + 1, target);
    if(A[index] == target)
        ans.push_back(index);
    
    return ans;

}

int main()
{
    vector<int> A = {1, 2, 3, 2, 3, 2, 2, 6, 7};
    vector<int> ans = solve(A, 0, 2);

    for(int i : ans)
        cout << i << "\t";
    cout << endl;
}