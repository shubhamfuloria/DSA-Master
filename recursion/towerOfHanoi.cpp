#include<bits/stdc++.h>

using namespace std;

void tower_of_hanoi(int n, char source, char dest, char helper)
{
    if(n == 0)
        return;

    tower_of_hanoi(n - 1, source, helper, dest);
    cout << "Move disk " << n << " from tower " << source << " to " << " tower " << dest << endl;
    tower_of_hanoi(n - 1, helper, dest, source);

}

int main()
{
    int n = 3;
    char source = 'A';
    char dest = 'B';
    char helper = 'C';

    tower_of_hanoi(3, source, dest, helper);
}

/*
Expectations from TOH(n, src, dest, help) funciton :
Print instructions to move n disks from src to dest (*following some rules)


Establish a faith in TOH(n - 1, src, dest, help) function :
It will print instructions to move n - 1 disks from source to destination using help.
This function already know how to move n - 1 disks from src to dest
Don't think too much .. how it knows the instructions already !
Have complete faith in this function with 0% doubt 


Link Faith with Expectation
If I move n - 1 disks from src to helper {TOH(n - 1) already know how to do that}
Then source tower will be left with only one disk {the largest one}
I can just move that one disk to destination tower
Then I can again move n - 1 disks from helper to dest {TOH(n - 1) already know how to do that}

Our problem is solved  :) 

PS: Have Complete Faith the recursive function 
*/