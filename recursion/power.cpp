#include <bits/stdc++.h>

using namespace std;

int power(int n, int e)
{
    if (e == 0)
        return 1;

    int t = power(n, e / 2);

    if (e % 2 == 0)
        return t * t;
    else
        return t * t * n;

}

int main()
{
    cout << power(2, 6) << endl;
}