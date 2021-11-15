#include<bits/stdc++.h>

using namespace std;

/*
Aproach:
1. We are sure that the square root of any number x will lie between 0 and x
2. So our initial search space will be 0 to X
3. We are required to return only integer part of the squqre root
4. So we will shrink our search space until there is only one element left, and that will be our answer
*/


int sqrt(int x)
{
    double low = 0, high = x;

    while((int)low != (int) high)
    {
        double mid = low + (high - low) / 2.0;

        if(mid * mid == x) 
            return mid;
        
        else if(mid * mid < x) //still mid may be our answer
            low = mid;
        
        else
            high = mid; //here mid can not be our answer but still we are including mid in search space 
                        //'cause our answer can lie in range [mid - 1, mid]
                        //if we discard mid also then we won't be able to get our answer
    }
    return (int)low;//At this point (int) low and (int) high will be same (termination condition)
                    //so it doesn't matter if we return low or high
}

int main()
{
    //return the integer part of squre root
    int x = 1;
    cout << sqrt(x) << endl;

}