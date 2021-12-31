#include <bits/stdc++.h>

using namespace std;

int main()
{
  int N = 5;

  for (int i = 0; i < N; i++)
  {

    for (int j = 0; j < i; j++)
      cout << " ";

    for (int j = 0; j < N - i; j++)
    {
      if (i == 0 or j == 0 or j == N - 1 - i)
        cout << "*";

      else
        cout << " ";
    }
    cout << endl;
  }
}

/*

*****
 *  *
  * *
   **
    *  

i = 0 => j = 0, 1, 2, 3, 4
i = 1 => j = 0, 3
i = 2 => j = 0, 2
i = 3 => j = 0, 1
i = 4 => j = 0, 0

N - 1 - i;
*/