#include<bits/stdc++.h>

using namespace std;

int maxSumFromEnds(vector<int> A, int B)
{
    const int N = A.size();
    

    //Approach : 
    //1. Get the sum of first B elements
    //2. run a loop B times from last
    //  a. keep subtracting the value from start and adding the value from end
    //  b. and keep track of maximum sum

    int max_sum = 0;
    int curr_sum = 0;
    int start = 0, end = N - 1;

    for(int i = 0; i < B; i++)
        curr_sum += A[i];

    //getting the final ans;
    start = B - 1; //start will be pointing to the Bth element from start so that we can use this index for subtraction
                   //end will be pointing to last element from end so that we can use that index for addition
    max_sum = curr_sum;
    for(int i = 0; i < B; i++)
    {
        curr_sum -= A[start--];
        curr_sum += A[end--];
        max_sum = max(curr_sum, max_sum);
    }
    return max_sum;
}

int main()
{
    vector<int> A = {5, -2, 100, 1, 2};
    cout << maxSumFromEnds(A, 3) << endl;
}