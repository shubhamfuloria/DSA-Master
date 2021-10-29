//it is a process in which one class defines another class as an entity reference

#include<iostream>

using namespace std;

class Address
{
    public:
        string addressLine;
        string state;
        string country;

    Address(string addressLine, string state, string country)
    {
        this->addressLine = addressLine;
        this->state = state;
        this->country = country;
    }
};

class Employee
{
    private :
        Address * address;
    public:
        string name;
        int id;

    Employee(string name, int id, Address* address)
    {
        this->name = name;
        this->id = id;
        this->address = address;
    }

    void display()
    {
        cout << this->name << endl << this->id << endl << address->addressLine << endl <<  address->state << endl << address->country << endl;
    }
};

int main()
{
    Address a1("Dehrakhas, Patel Nagar", "Uttarakhand", "India");
    Employee e1("Shubham", 10200, &a1);

    e1.display();
}