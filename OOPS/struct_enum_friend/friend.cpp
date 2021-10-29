#include <iostream>

using namespace std;

class B;

class A
{
    int x;

public:
    A(int e) { x = e; }

    friend int min(A, B);
};

class B
{
    int y;

public:
    B(int el) {
        y = el;
    }

    friend int min(A, B);
};

int min(A a, B b)
{
    if(a.x <= b.y)
        return a.x;
    return b.y;
};

int main()
{
    A a(20);
    B b(15);

    cout << min(a, b) << endl;
}