#include<iostream>

using namespace std;

struct Student
{
    Student(string n, int i, int a)
    {
        name = n;
        id = i;
        age = a;
    }
    string name;
    int id;
    int age;

    void show()
    {
        cout << name << " " << id << " " << age << endl;
    }
};

int main()
{
    Student s1("Shubham", 10200, 20);

    s1.show();    

}