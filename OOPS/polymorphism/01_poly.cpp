#include <iostream>

using namespace std;

/*
there is a neccesity of refer all the object of different classes using single pointer. So we create pointer to the base class and refer to all derived objects. But when base class pointer contain address of derived class object, always executes the base class function. This issue can only be ressolved using virtual functions

*/

class A
{
    int x = 5;
public:
    void display() 
    {
        cout << "X: " << x << endl; 
    }
};

class B : public A
{
    int y = 10;

public:
    void display()
    {
        cout << "Y: " << y << endl;
    }
    void speak()
    {
        cout << "I am speaking .... " << endl;
    }
};
int main()
{
    B b;

    b.display();
    b.speak();

    A * a = &b;

    a->display();
    a->speak();
}