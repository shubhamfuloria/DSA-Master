#include <iostream>
//multilevel inheritence is process of deriving class from another derived class
using namespace std;

class Animal
{
public:
    void eat()
    {
        cout << "Eating ..... " << endl;
    }
};

class Dog : public Animal
{
public: 
    void bark()
    {
        cout << "barking......" << endl;
    }
    

};

class BabyDog : public Dog
{
public:
    void weep()
    {
        cout << "weeping...... veeeeehhhhh" << endl;
    }

};

int main()
{
    BabyDog tommy;
    tommy.access_eat();
    tommy.bark();
    tommy.weep();
}