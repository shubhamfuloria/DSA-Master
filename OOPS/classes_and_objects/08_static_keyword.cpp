#include <iostream>

using namespace std;

class Person
{
public:
    Person()
    {
        person_count++;
    }
    static int person_count;  //static member declaration (incomplete type)
    string name;
    int age;
};

int Person::person_count = 0;


int main()
{
    cout << Person::person_count << endl;
    Person naman;
    cout << Person::person_count << endl;
    Person shubham;
    cout << shubham.person_count << endl;
    Person aman;
    cout << Person::person_count << endl;
}