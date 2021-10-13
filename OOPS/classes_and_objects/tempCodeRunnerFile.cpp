#include <iostream>

using namespace std;

class Person
{
public:
    Person()
    {
        this->university = "Shri Guru Ram Rai University";
    }

    string name;
    int age;
    static string university;
};

int main()
{
    Person p1;
    cout << p1.university << endl;
}