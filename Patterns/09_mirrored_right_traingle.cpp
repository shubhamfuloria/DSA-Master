
#include <bits/stdc++.h>

using namespace std;

int main()
{
  int N = 5;

  for (int i = 0; i < N; i++)
  {

    for (int j = 0; j < N - 1 - i; j++)
      cout << " ";

    for (int j = 0; j < i + 1; j++)
      cout << "*";

    cout << endl;
  }
}

/*

    *
   **
  ***
 ****
*****

spaces :

i = 0 => j = 0, 1, 2, 3
i = 1 => j = 0, 1, 2
i = 2 => j = 0, 1
i = 3 => j = 0
i = 4 => j = 

i    j loop
0      4 times
1      3 times
2      2 times
3      1 times
4      0 times

j loop is running 4 - i times ( N - 1 - i ) for spaces

Stars:
i = 0 => j = 4
i = 1 => j = 3, 4
i = 2 => j = 2, 3, 4
i = 3 => j = 1, 2, 3, 4
i = 4 => j = 0, 1, 2, 3, 4


i        j loop
0       1 times
1       2 times
2       3 times
3       4 times
4       5 times

star loop is running i + 1 times

*/