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

int main()
{
    Person * p1 = new Person();
    p1->name = "Edward";
    p1->age = 20;

    cout << p1->name << endl;
    cout << p1->age << endl;

    delete p1; //destructor invoked

    Person p2;
    p2.name = "Angela";
    p2.age = 19;

    cout << p2.name << endl;
    cout << p2.age << endl;
}


/*
Destructor is called when our object is out of scope or we delete our object explicitely
Destructor for objects created in heap using new keyword does't call automatically , we explicitely need to call delete or free() to deallocate the memory(destroy the object)
*/
