#include <bits/stdc++.h>

using namespace std;
vector<int> intersection(vector<int> &nums1, vector<int> &nums2)
{

    //1. push everything from num1 into a hashmap
    //2. traverse num2 and search that el in hashmap
    //   a. if find : push in ans and remove from hashmap
    //   b. if not find: continue traversal

    unordered_map<int, int> umap; //el : freq

    for (int el : nums1)
        umap[el] = 1;
    vector<int> r;
    for (int el : nums2)
    {
        if (umap[el] == 1)
        {
            r.push_back(el);
            umap[el] = 0;
        }
    }
    return r;
}

int main()
{
    vector<int> A = {1, 2, 2, 1};
    vector<int> B = {2, 2};

    vector<int> inter = intersection(A, B);

    for (int el : inter)
        cout << el << " ";
    cout << endl;
}