#include<bits/stdc++.h>

using namespace std;

int kthLargestElement(vector<int> A, int k)
{
    set<int, greater<int>> s;

    for(int i : A)
        s.insert(i);

    int count = 1;
    auto it = s.begin();
    while(it != s.end() and count < k)
    {
        count++;
        it++;
    }
    return *it;
}

int main()
{
    vector<int> A = {3, 2, 3, 1, 2, 4, 5, 5, 6};
    cout << kthLargestElement(A, 4) << endl;
}