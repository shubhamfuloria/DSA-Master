#include <bits/stdc++.h>

using namespace std;

int main()
{
  int N = 5;

  for (int i = 0; i < 2 * N - 1; i++)
  {
    if (i < 5)
    {
      for (int j = 0; j < i + 1; j++)
        cout << "*";
    }
    else
    {
      for (int j = 0; j < 2 * N - i - 1; j++)
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


i = 0 => 1 time
i = 1 => 2 time
i = 2 => 3 times
i = 3 => 4 times
i = 4 => 5 times

star is printing i times

i = 5 => 4 times
i = 6 => 3 times
i = 7 => 2 times
i = 8 => 1 time

star is printing 10 - i times ( 2*N - i - 1) times

*/