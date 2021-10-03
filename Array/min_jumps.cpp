#include<bits/stdc++.h>

using namespace std;

int get_min_jumps(vector<int> A, int currPosition, int destination)
{
    if(currPosition >= destination)
        return 0;

    int min_jumps = INT_MAX;

    for(int i = 1; i <= A[currPosition]; i++)
    {
        int sans = get_min_jumps(A, currPosition + i, destination);
        min_jumps = min(min_jumps, 1 + sans);
    }   
    return min_jumps;
}

int main()
{
    vector<int> A = {1, 4, 3, 2, 6, 7};

    cout << get_min_jumps(A, 0, A.size() - 1) << endl;
}


/*
Expectation : 
    get minimum number of jumps required to reach end of the array

Faith:
    get_min_jumps(A, curr + i, destination) -> this function will return minimum number of jumps to reach end of the array from i
*/