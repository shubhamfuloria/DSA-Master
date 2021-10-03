#include<bits/stdc++.h>

using namespace std;

vector<int> max_subarray_sum(vector<int> A)
{
    int best_sum = INT_MIN;
    unsigned int best_start, best_end;
    best_start = best_end = 0;
    int current_sum = 0;

    for(int i = 0; i < A.size(); i++)
    {
        int current_start;
        if(current_sum <= 0)
        {
            current_start = i;
            current_sum = A[i];
        }
        else
            current_sum += A[i];
        
        if(current_sum > best_sum)
        {
            best_sum = current_sum;
            best_start = current_start;
            best_end = i + 1;
        }
    }

    return {best_sum, (int)best_start, (int)best_end};
}

int main()
{
    vector<int> A = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    vector<int> ans = max_subarray_sum(A);

    for(auto i : ans)
        cout << i << "\t";
    cout << endl;
}