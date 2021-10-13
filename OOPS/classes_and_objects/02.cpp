#include <iostream>

using namespace std;

class Student
{
public:
    Student(string name, int age)
    {
        this->name = name;
        this->age = age;
    }
    Student()
    {
        this->name = "Not defined";
        this->age = 0;
    }

    string name;
    int age;
};

void fun(Student &s1)
{
    s1.name = "Shubham";

    cout << s1.name << endl;
    cout << s1.age << endl;

    return s1;
}

int main()
{
    // Student s1;

    // cout << s1.name << endl;
    // cout << s1.age << endl;

    // fun(s1);

    //can I copy objects in c++

    Student s1 = Student("Shubham", 20);
    // {name: "shubham", age: 20}
    Student* s3 = new Student("Naman", 21);


}