#include <bits/stdc++.h>

using namespace std;

int main()
{
  int N = 5;

  for (int i = 0; i < N; i++)
  {

    for (int j = 0; j < i + 1; j++)
    {
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


i = 0 => j = 0
i = 1 => j = 0, 1
i = 2 => j = 0, 1, 2
i = 3 => j = 0, 1, 2, 3
i = 4 => j = 0, 1, 2, 3, 4

i   j loop
0     1 time
1     2 times
2     3 times
3     4 times
4     5 times


j's loop is running i + 1 times

*/