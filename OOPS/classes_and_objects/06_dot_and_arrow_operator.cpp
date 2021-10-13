#include <iostream>

using namespace std;

class Person
{
public:
    Person(string name, int age, bool isVergin)
    {
        this->name = name;
        this->age = age;
        this->isVergin = isVergin;
    }
    string name;
    int age;
    bool isVergin;
};

int main()
{
    Person rahul("Rahul", 22, false);
    Person *naman = new Person("Naman", 25, true);

    cout << rahul.isVergin << endl;
    cout << (*naman).isVergin << endl;
    cout << naman->age << endl;
}