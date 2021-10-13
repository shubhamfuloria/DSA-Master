#include<iostream>
#include<string>

using namespace std;

class Student
{
public:
    int id;
    int salary;
    string name;
};

int main()
{

    Student s1= Student(); //an instance of Student class will be stored in the call stack
    //above is same as Student s1; 
    Student* s2 = new Student(); //an instance of Student class will be stored in the heap

    s1.id = 120;
    s1.salary = 1000000;
    s1.name = "Shubham";

    s2->id = 121;
    s2->salary = 1200000;
    s2->name = "Elliot Anderson";

    cout << s1.id << " " << s1.salary << " " << s1.name << endl;
    cout << s2->id << " " << s2->salary << " " << s2->name << endl;

}