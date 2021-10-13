#include <iostream>

using namespace std;
//static variables are not bound to class instances
class Person
{
public:

    string name;
    int age;
    static string university;  //static member declaration (incomplete type)
};

string Person::university = "Shri Guru Ram Rai University"; //static member definition (complete type);

int main()
{
    cout << Person::university << endl;

    Person p1;
    cout << p1.university << endl;
}