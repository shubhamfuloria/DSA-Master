#include <bits/stdc++.h>

using namespace std;

void pdi(int n)
{
    if(n == 0)
        return;

    cout << n << endl;
    pdi(n - 1);
    cout << n << endl;
}

int main()
{
    pdi(5);
}