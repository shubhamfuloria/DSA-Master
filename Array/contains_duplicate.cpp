#include <bits/stdc++.h>

using namespace std;

bool containsDuplicate(vector<int> &nums)
{

    unordered_map<int, int> umap; //value : freq

    for (auto el : nums)
    {
        umap[el]++;
        if (umap[el] == 2)
            return false;
    }
    return true;
}

int main()
{
    vector<int> A = {1, 2, 3, 1};
    cout << containsDuplicate(A) << endl;
}