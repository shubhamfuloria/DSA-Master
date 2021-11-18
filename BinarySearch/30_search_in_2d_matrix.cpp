#include <bits/stdc++.h>

using namespace std;

/*
Aproach: 
1. Start with top right corener element
2. We are sure that bottom direction will have larger element, and left direction will have smaller element
3. We'll move accordingly
4. Return the answer :)

*/

bool search(vector<vector<int>> &A, int target)
{
    int row = 0, col = A[0].size() - 1;

    while (row >= 0 and row <= A.size() - 1 and col >= 0 and col <= A[0].size() - 1)
    {
        if (A[row][col] == target)
            return true;

        else if (target < A[row][col])
            col--;

        else if (A[row][col] < target)
            row++;
    }
    return false;
}

int main()
{
    vector<vector<int>> A = {{10, 20, 30, 40},
                             {15, 25, 35, 45},
                             {27, 29, 37, 48},
                             {32, 33, 39, 50}};

    cout << search(A, 51) << endl;
}