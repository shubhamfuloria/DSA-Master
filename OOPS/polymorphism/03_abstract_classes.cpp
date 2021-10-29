#include<iostream>

using namespace std;

/*
In order to make a class abstract in C++, we need to define at one pure virtual method in the class.
*/

class A
{
public:
    virtual void display() = 0;
};

class B : public A
{
public:
    void display() 
    {
        cout << "I am method of class A, overridden by class B" << endl;
    }
};

int main()
{
    B b;
    b.display();
    
    A * a;
    a = &b;


    a->display();
}