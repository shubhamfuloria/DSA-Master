#include<bits/stdc++.h>

using namespace std;

int max_triplet_sum(vector<int> A)
{
    int best_sum = INT_MIN;

    for(int i = 1; i < A.size() - 1; i++)
    {
        int mid_element = A[i];

        //find largest elements less than A[i];
        int left_element = INT_MIN;
        for(int j = 0; j < i; j++)
            if(A[j] < mid_element)
                left_element = max(left_element, A[j]);

        //find largest element greater than A[i];
        int right_element = INT_MIN;
        for(int j = i + 1; j < A.size(); j++)
            if(A[j] > mid_element)
                right_element = max(right_element, A[j]);

        best_sum = max(best_sum, left_element + mid_element + right_element);
    }
    return best_sum;
}


int main()
{
    vector<int> A = {2, 5, 3, 1, 4, 9};

    cout << max_triplet_sum(A) << endl;
}