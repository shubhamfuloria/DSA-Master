#include <bits/stdc++.h>

using namespace std;

class A
{
public:
    virtual void display()
    {
        cout << "I am method of class A" << endl;
    }
};

class B : public A
{
public:
    void display()
    {
        cout << "I am method of class B" << endl;
    }
    void speak()
    {
        cout << "I am speaking, and method of class B" << endl;
    }
};

int main()
{
    B b;
    b.display();
    b.speak();

    A * a = &b;
    a->display();

}