
/* A Naive recursive implementation of
0-1 Knapsack problem */
#include <bits/stdc++.h>
using namespace std;

int knapSack(int W, int wt[], int val[], int n)
{

    // Base Case
    if (n == 0 || W == 0)
        return 0;

    if (wt[n - 1] <= W)
    {
        //included
        int included = val[n - 1] + knapSack(W - wt[n - 1], wt, val, n - 1);
        //not included
        int excluded = knapSack(W, wt, val, n - 1); //160

        return max(included, excluded);
    }
    else
    {
        int excluded = knapSack(W, wt, val, n - 1);
        return excluded;
    }
}
/*  
X = 2
1st try
[0 1] MEX: 2
bitwise OR 1

2nd try WRONG
[1, 2] MEX: 0
bitwise OR 3

3rd try 
[0, 2] MEX: 1
bitwise OR: 2

[1, 2, 3]
01
10
11
__
11
____
000 -> 0;


                                                                                   

                                                                                                                  
                                                                                                                  

                                                                        
                                                              
                        
                     






*/

// Driver code
int main()
{
    int val[] = {120, 90};
    int wt[] = {20, 30};
    int W = 40;
    int n = sizeof(val) / sizeof(val[0]);
    cout << knapSack(W, wt, val, n) << endl;
    return 0;
}

// This code is contributed by rathbhupendra