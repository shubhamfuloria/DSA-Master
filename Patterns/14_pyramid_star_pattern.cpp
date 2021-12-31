#include<bits/stdc++.h>

using namespace std;

int main()
{
    int N = 5;

    for(int i = 0; i < N; i++)
    {
      for(int j = 0; j < N - 1 - i; j++)
        cout << " ";
      
      for(int j = 0; j < 2*i + 1; j++)
        cout << "*";
      
      cout << endl;
    }
}

/*

    *
   ***
  *****
 *******
*********    

N - 1 -i times space is printing
star is printing 2 * i + 1 times

*/