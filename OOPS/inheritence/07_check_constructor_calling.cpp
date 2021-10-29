#include <iostream>

using namespace std;

class A
{
public:
    A(int x) 
    {
        cout << "A's Constructor is Invoked" << endl;
    }
};

class B : public A
{
public:
    B() : A(2)
    {
        cout << "B's Constructor is Invoked" << endl;
    }
};



int main()
{
    B obj;

}