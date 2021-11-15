#include <bits/stdc++.h>

using namespace std;

int getSoldiers(vector<int> A)
{
    //search the last occurance of 1 to get number of soldiers

    int low = 0, high = A.size() - 1;

    while (low <= high)
    {
        int mid = (low + high) / 2;

        if (A[mid] < 1)
            high = mid - 1;
        else
            low = mid + 1;
    }
    return high + 1;
}
bool cmp(pair<int, int> A, pair<int, int> B)
{
    if (A.first == B.first)
        return A.second > B.second;

    return A.first > B.first;
}
vector<int> kWeakestRows(vector<vector<int>> &mat, int k)
{
    vector<pair<int, int>> rowStrength; //<soldiers, index>
    for (int i = 0; i < mat.size(); i++)
    {
        //get strength of each row int the array
        int soldiers = getSoldiers(mat[i]);
        pair<int, int> p(soldiers, i);
        rowStrength.push_back(p);
    }
    cout << "Before Sorting" << endl;
    for (auto i : rowStrength)
        cout << i.first << "  " << i.second << endl;


    //at this point we'll be having strenth of each row in form of <soldiers, index>
    //we'll sort these strength to get k weakest row

    sort(rowStrength.begin(), rowStrength.end(), cmp);

    //now I can pick last k indices easily;

    vector<int> indices;
    // int i = rowStrength.size() - 1;

    cout << "After Sorting" << endl;

    for (auto i : rowStrength)
        cout << i.first << "  " << i.second << endl;
    int n = rowStrength.size();
    for(int i = rowStrength.size() - 1; i >= n - k; i--)
        indices.push_back(rowStrength[i].second);

    return indices;
}

int main()
{
    vector<vector<int>> mat = {{1, 0}, {1, 0}, {1, 0}, {1, 1}};

    vector<int> ans = kWeakestRows(mat, 4);

    for (auto i : ans)
        cout << i << " ";
    cout << endl;
}