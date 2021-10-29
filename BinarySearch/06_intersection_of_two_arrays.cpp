#include <bits/stdc++.h>

using namespace std;

vector<int> intersect(vector<int> &nums1, vector<int> &nums2)
{

    //1. push everything from num1 into a hashmap with freq
    //2. traverse num2 and search that el in hashmap
    //   a. if find : push in ans decrease freq of that el by 1 in hashmap
    //   b. if not find: continue traversal

    unordered_map<int, int> umap; //el : freq

    for (int el : nums1)
        umap[el]++;

    vector<int> r;
    for (int el : nums2)
    {
        if (umap[el] > 0)
        {
            r.push_back(el);
            umap[el]--;
        }
    }
    return r;
}

int main()
{
    vector<int> A = {1, 2, 2, 1};
    vector<int> B = {2, 2};

    vector<int> inter = intersect(A, B);

    for (int el : inter)
        cout << el << " ";
    cout << endl;
}