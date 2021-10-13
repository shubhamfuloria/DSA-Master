#include<iostream>

using namespace std;

void fun()
{
    static int y = 5;
}

int main()
{
    static int x = 5;
    fun();
    cout << x << endl;
    cout << fun::y << endl;
}