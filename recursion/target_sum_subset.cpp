#include<bits/stdc++.h>

using namespace std;

void print_target_sum(vector<int> A, int target, int n, vector<int> ans)
{
    if(n < 0 or target < 0)
    {
        if(target == 0)
        {
            for(auto i : ans)
                cout << i << " ";
            cout << endl;
        }
        return;
    }

    //not including nth element 
    print_target_sum(A, target, n - 1, ans);

    //including nth element
    ans.push_back(A[n]);
    print_target_sum(A, target - A[n], n - 1, ans);

}
int main()
{
    vector<int> A = {10, 20, 30, 40, 50};

    print_target_sum(A, 60, A.size() - 1, {});
}