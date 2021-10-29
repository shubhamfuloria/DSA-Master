#include <iostream>

using namespace std;

class Animal
{
public:
    void eat() { cout << "Eating ......" << endl; }
};

class Dog : private Animal
{
public:
    void bark()
    {
        cout << "Barking......." << endl;
    }

    void access_eat()
    {
        eat();
    }
};

int main()
{
    Dog kutta;
    kutta.bark();
    kutta.access_eat();
}

/*
1. Private members are only accessible by public methods or friend function of the same class
2. Private members of the base class are never inherited
3. When the base class is privately inherited by derived class then all the public members of the base class become private members of the derived class
4. When the base class is publicly inherited by derived class then all the public members of the base class become public members of the derived class. 
*/