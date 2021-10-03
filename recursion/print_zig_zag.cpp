#include<bits/stdc++.h>

using namespace std;

void printZigZag(int n)
{
    if(n == 0)
        return;

    cout << "Pre : " << n << endl;
    printZigZag(n - 1);
    cout << "In : " << n << endl;
    printZigZag(n - 1);
    cout << "Post : " << n << endl;
}
int main()
{
    printZigZag(2);
}