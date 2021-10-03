#include<bits/stdc++.h>

using namespace std;

int count_pairs(vector<int> A, int K)
{
    unordered_map<int, int> umap;
    int count = 0;
    for(int i = 0; i < A.size(); i++)
    {
        count += umap[K - A[i]];
        umap[A[i]]++;
    }
    return count;
}

int main()
{
    vector<int> A = {1, 5, 7, 1};
    cout << count_pairs(A, 6) << endl;
}