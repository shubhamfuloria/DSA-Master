#include <bits/stdc++.h>

using namespace std;

int main()
{
  int N = 5;

  for (int i = 0; i < N; i++)
  {
    for (int j = 0; j < N - 1 - i; j++)
      cout << " ";

    for (int j = 0; j < 2 * i + 1; j++)
    {
      if (i == 0 or i == N - 1 or j == 0 or j == 2 * i)
        cout << "*";

      else
        cout << " ";
    }
    cout << endl;
  }
}
/*

    *
   * *
  *   *
 *     *
********* 


i = 0 => j = 0
i = 1 => j = 0, 2
i = 2 => j = 0, 4
i = 3 => j = 0, 6
i = 4 => j = 0, 1, 2, 3, 4, 5, 6, 7, 8, 9

*/