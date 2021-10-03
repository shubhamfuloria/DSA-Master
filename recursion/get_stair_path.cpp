#include <bits/stdc++.h>

using namespace std;


vector<string> get_paths(int n)
{
    if(n == 0)
        return {""};
    if(n < 0)
        return {};
    vector<string> ways1 = get_paths(n - 1);
    vector<string> ways2 = get_paths(n - 2);

    vector<string> bans;

    for(string s : ways1)
        bans.push_back(s + to_string(1));

    for(string s : ways2)
        bans.push_back(s + to_string(2));

    return bans;

}

int main()
{
    int n = 4;
    vector<string> ans = get_paths(n);

    for(string s : ans)
        cout << s << "\t";
    cout << endl;
}

/*
Problem:
n - number of staircase
You are at ground (0th stair)
You can climb either one or two steps in one move
Return the total number ways to reach the nth stair

F() -> recursive function
Expectation from F(n): it will return all the ways to reach from ground to nth stair

Establishing the Faith : 
F(n - 1) already knows how to get ways for n - 1 staircases. So if I write F(n - 1), then it will return all possible ways . 
and at the same time F(n - 2) also knows how to get ways for n - 2 staircases.
Faith should unshakable !
You have to have this leap of faith in your recursive function.
"Those who cannot take a leap of faith in recursion are condemned to wander in the circles of code until they hit base condition"

So after the first recursive call ways1 will contain all possible ways to reach (n - 1)th staircase from ground
and after the second recursive call ways2 will contain all possible ways to reach (n - 2)th staircase from ground.

Eg. N = 4
__
  |__
     |__
        |__     
           |__
First Faith : ways1 will contain all possible ways to reach 3rd staircase from ground
which are {"111", "12", "21"}

Second Fiath : ways2 will contain all possible ways to reach 2nd staircase from ground
which are {"11", "2"}

Now to meet the first faith with expectation , I need to climb one more staircase to reach 4th staircase (as I'm already at 3rd staircase)
So I'll climb one more stair in first faith
So bans will contain
{"1111", "121", "211"}

To meet second faith with expectation ,I need to climb two morestaircase to reach 4th staircase (as I'm already at 2nd staircase)
So I'll climb two more stairs in second faith
So bans will contain (append)
{"112", "22"}

So finally our returned answer will be

{"1111", "121", "211", "112", "22"}

    

*/
