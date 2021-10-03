#include <iostream>
#include <vector>

using namespace std;

void solve(vector<int> A, int n, int target, string ans)
{

    if (n == -1)
    {
        if(target == 0)
            cout << ans << endl;
        
        return;
    }

    //choice 2: excluding element at nth index
    solve(A, n - 1, target, ans);

    //choice 1: including element at nth index
    solve(A, n - 1, target - A[n], ans + to_string(A[n]) + ", ");
}

int main()
{
    vector<int> A = {10, 20, 30, 40, 50};
    solve(A, A.size() - 1, 70, "");
}