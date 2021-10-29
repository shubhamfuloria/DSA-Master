#include <iostream>

using namespace std;

class Account
{
private: 
    int x = 10000000;
public:
    float salary = 60000;
};

class Programmer : public Account
{
public:
    float bonus = 5000;

    int get_salary()
    {
        return salary;
    }
};

int main()
{
    Programmer p1;

    cout << p1.salary << endl;
    cout << p1.x << endl;
}