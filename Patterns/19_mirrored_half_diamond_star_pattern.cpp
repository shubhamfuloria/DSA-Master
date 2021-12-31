#include <bits/stdc++.h>

using namespace std;

int main()
{
  int N = 5;
  for (int i = 0; i < 2 * N - 1; i++)
  {
    if (i < 5)
    {
      for (int j = 0; j < N - 1 - i; j++)
        cout << " ";

      for (int j = 0; j < i + 1; j++)
        cout << "*";
    }
    else
    {
      for (int j = 0; j < i - (N - 1); j++)
        cout << " ";

      for (int j = 0; j < 2 * N - 1 - i; j++)
        cout << "*";
    }

    cout << endl;
  }
}

/*

    *
   ** 
  ***
 **** 
*****
 ****
  ***
   **
    *


SPACES: i < 5 => 4 - i (N - 1 - i) times
        i >= 5 => i - N - 1 times

Stars: i < 5 => i times
       i >= 5 => 2 * N - 1 - i

*/