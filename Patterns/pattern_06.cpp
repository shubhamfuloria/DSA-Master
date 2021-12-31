#include <bits/stdc++.h>

using namespace std;

int main()
{
  int N = 5;

  for (int i = 0; i < N; i++)
  {

    for (int j = 0; j < i; j++)
      cout << " ";

    for (int j = 0; j < N; j++)
    {
      cout << "*";
    }
    cout << endl;
  }
}

/*

*****
 *****
  *****
   *****
    *****


we can print star by our previous logic
lets think about spaces

i = 0 => j = 
i = 1 => j = 0
i = 2 => j = 0, 1
i = 3 => j = 0, 1, 2
i = 4 => j = 0, 1, 2, 3

i        j loop
0       0 times
1       1 times
2       2 times
3       3 times
4       4 times

we will run space loop i times

*/