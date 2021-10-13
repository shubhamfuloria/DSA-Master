#include <iostream>
#include <bits/stdc++.h>

using namespace std;
enum Gender
{
    Male,
    Female
};
enum Week
{
    Sunday = 1,
    Monday,
    Tuesday,
    Wednesday,
    Thrusday,
    Friday,
    Saturday,
};

int main()
{

    Gender g1 = Gender::Male;
    Gender g2 = Gender::Female;
    cout << g1 << endl;
    cout << g2 << endl;

    Week meeting_day = Week::Sunday;
    Week project_deployment_day = Week::Saturday;

    cout << meeting_day << endl;
    cout << project_deployment_day << endl;
}