#include <bits/stdc++.h>

using namespace std;

int fun(int n, int exp)
{
    if (exp == 0)
        return 1;

    return n * fun(n, exp - 1);
}

int exp(int n)
{
    if(n == 0)
        return 1;
    
    int temp = exp(n/2);
    if(n%2 == 0)
        return temp * temp;
    else
        return 2 * temp * temp;
}

int main()
{
    // cout << fun(2, 4) << endl;
    cout << exp(5) << endl;
}