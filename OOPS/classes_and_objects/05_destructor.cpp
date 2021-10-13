#include <bits/stdc++.h>

using namespace std;

class Person
{
public:
    Person()
    {
        cout << "Constructor is invoked" << endl;
    }

    string name;
    int age;

    ~Person()
    {
        cout << "Destructor is invoked" << endl;
    }
};

void fun()
{
    Person*p1 = new Person();
    Person p2;
    delete p1;
}

int main()
{
    fun();
    cout << "Hello I love you." << endl;
}