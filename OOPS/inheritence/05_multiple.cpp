#include <iostream>

using namespace std;

class A
{
protected:
    int a;

public:
    void set_a(int el)
    {
        a = el;
    }
};

class B
{
protected:
    int b;

public:
    void set_b(int el)
    {
        b = el;
    }
};

class C : public A, public B
{
public:
    void display()
    {
        cout << "a:  " << a << "  b:  " << b << endl;
    }
};

int main()
{
    C c;
    c.set_a(10);
    c.set_b(70);

    c.display();
}