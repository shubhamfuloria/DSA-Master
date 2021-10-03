int Solution::solve(vector<int> &A, int B) {

    //algorithm :
    //1. get the sum of first B elements
    //2. Run a loop for B times 
    //   a. keep subracting elements from first B elements and simultaneously keep adding elements from last
    //   b. keep track of max_sum

    const int N = A.size();
    int start = 0, end = N - 1;
    int curr_sum = 0, best_sum = 0;

    //get the sum of first B elements
    for(int i = 0; i < B; i++)
        curr_sum += A[i];
    
    start = B - 1; // start will be pointing to the last element from first B elements so that we can subract them and add from last
    best_sum = curr_sum;
    for(int i = 0; i < B; i++)
    {
        curr_sum -= A[start--];
        curr_sum += A[end--];
        best_sum = max(best_sum, curr_sum);
    }
    return best_sum;
}

