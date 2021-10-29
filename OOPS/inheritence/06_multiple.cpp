#include <iostream>

using namespace std;

//Ambiguity Resolution in Inheritence

class A
{
protected:
    int a;

public:
    void set_data(int el)
    {
        a = el;
    }
};

class B
{
protected:
    int b;

public:
    void set_data(int el)
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
    c.A::set_data(10);
    c.B::set_data(70);

    c.display();
}