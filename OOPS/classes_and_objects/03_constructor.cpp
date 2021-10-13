#include <iostream>
#include <string>

using namespace std;

class Vehical
{
public:
    Vehical()
    {
        cout << "One vehical is created" << endl;
    }
    Vehical(string n, int m, int ms)
    {
        name = n;
        milaege = m;
        max_speed = ms;
    }

    string name;
    int milaege;
    int max_speed;
};

int main()
{
    Vehical gaadi1("Lamboghini", 200, 700);
    Vehical gaadi2("Honda", 100, 300);
    Vehical gaadi3("TVS", 200, 100);

    cout << gaadi3.name << endl;
}