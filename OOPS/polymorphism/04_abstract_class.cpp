#include <iostream>

using namespace std;

/*
REAL LIFE EXAMPLE OF ABSTRACT CLASSES:

Say you have a three printers that you would need to write a driver for, Lexmark, Canon, and HP.
All three printers will have the print() and getSystemResource() methods.


print: will be different for each printer
getSystemResource() : will remain same throughout the three printers

we can achieve this using abstract classes
*/

class Printer
{
public:
    void getSystemResouce()
    {
        //implementation of getting resources
        cout << "Got system Resources." << endl;
    }
    virtual void print() = 0; //abstract method (this class will also become abstract class)
    //we can not make object of this class
};

class HP : public Printer
{
public:
    void print()
    {
        //implementation of print() functionality of HP printer
        cout << "Printed using HP printer." << endl;
    }
};

class Canon : public Printer
{
public:
    void print()
    {
        //implementation of print() functionality of Canon printer
        cout << "Printed using Canon printer." << endl;
    }
};

class Lexmark : public Printer
{
public:
    void print()
    {
        //implementation of print() functionality of Lexmark printer
        cout << "Printed using Lexmark printer." << endl;
    }
};

int main()
{
    Printer *hp_printer = new HP();
    hp_printer->getSystemResouce();
    hp_printer->print();

    Printer *canon_printer = new Canon();
    canon_printer->getSystemResouce();
    canon_printer->print();

    Printer *lexmark_printer = new Lexmark();
    lexmark_printer->getSystemResouce();
    lexmark_printer->print();
}