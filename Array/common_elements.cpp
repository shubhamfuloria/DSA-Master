#include <bits/stdc++.h>

using namespace std;

vector<int> get_common(vector<int> A, vector<int> B, vector<int> C)
{
    int n1 = A.size(), n2 = B.size(), n3 = C.size();
    int p1 = 0, p2 = 0, p3 = 0;
    vector<int> r;
    while (p1 < n1 and p2 < n2 and p3 < n3)
    {
        if (A[p1] == B[p2] and B[p2] == C[p3])
        {
            r.push_back(A[p1]);
            p1++, p2++, p3++;
        }
        else if (A[p1] < B[p2] and A[p1] < C[p3])
            p1++;

        else if (B[p2] < A[p1] and B[p2] < C[p3])
            p2++;

        else
            p3++;
    }
    
    auto it = unique(r.begin(), r.begin() + r.size());
    r.resize(distance(r.begin(), it));
    return r;

}

int main()
{
    vector<int> A = {3, 3, 3};
    vector<int> B = {3, 3, 3};
    vector<int> C = {3, 3, 3};

    vector<int> ans = get_common(A, B, C);

    for (auto i : ans)
        cout << i << " ";

    cout << endl;
}