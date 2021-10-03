#include <bits/stdc++.h>

using namespace std;

int drop_it(int e, int f)
{
    if (f == 0 or f == 1)
        return f;

    if (e == 1)
        return f;

    int mn = INT_MAX;

    for (int k = 1; k <= f; k++)
    {
        int attempts_when_egg_broke_0 = drop_it(e - 1, k - 1);
        int attempts_when_egg_broke_1 = drop_it(e, f - k);
        int temp = 1 + max(attempts_when_egg_broke_0, attempts_when_egg_broke_1);
        mn = min(mn, temp);
    }
    return mn;
}

int main()
{
    int n = 2;
    int k = 4;

    cout << drop_it(n, k) << endl;
}