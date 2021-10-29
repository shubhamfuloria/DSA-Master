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
    void display(int x)
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
I wanted to override display method in derived class, but accidently I changed the signature of display() function 
in derived class. But still our code is running fine, while calling the display() of derived class, it is actully running
display of Base class.

To overcome this C++11 introduced a override keyword to avoid such silly mistakes

*/