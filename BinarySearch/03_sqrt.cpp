#include <bits/stdc++.h>

using namespace std;

double multiply(double number, double times)
{
    double r = 1.0;

    for (int i = 1; i <= times; i++)
        r *= number;

    return r;
}
double get_nth_root(int n, int m)
{
    double low = 0, high = m;
    double eps = 1e-6;

    while (high - low > eps)
    {
        double mid = (low + high) / 2.0;
        double curr = multiply(mid, n);

        if(curr == m)
            return curr;

        else if (curr < m)
            low = mid;

        else
            high = mid;
    }
    cout << low << "\t" << high << endl;
    return low;
}
int main()
{
    int x = 63;

    cout << get_nth_root(2, x) << endl;
}

/*
We are just shrinking the search space from [1-M] to [K.something - K.something] and trying to reach the nearest ans
binart Search is really beautiful

*/