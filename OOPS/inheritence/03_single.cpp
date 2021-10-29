#include <iostream>

using namespace std;

class A
{
private:
    int a = 4;
    int b = 5;

public:
    int mul()
    {
        return a * b;
    }
};

class B : private A
{

    //mul() is a private member here
public:
    void display()
    {
        cout << mul() << endl;
    }

};

int main()
{
    B obj;

    obj.display();

}