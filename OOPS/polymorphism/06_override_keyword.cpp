#include <iostream>

using namespace std;

class Base
{
public:
    virtual void display()
    {
        cout << "I am method of Base class." << endl;
    }
};

class Derived : public Base
{
public:
    void display() override 
    {
        cout << "I am method of Derived class, and I'm indended to be overridden." << endl;
    }
};

int main()
{
    Base * obj = new Derived();
    obj->display();
}


/*
With override keyword, we cannot 
*/