#include <bits/stdc++.h>

using namespace std;

int main()
{
  int N = 5;

  for (int i = 0; i < N; i++)
  {
    for (int j = 0; j < i; j++)
      cout << " ";

    for (int j = 0; j < 2 * (N - i) - 1; j++)
      cout << "*";

    cout << endl;
  }
}

/*

*********
 *******
  *****
   ***
    *
    

space => i times
stars:
i = 0 => 9 times
i = 1 => 7 times
i = 2 => 5 times
i = 3 => 3 times
i = 4 => 1 times

2 * (N - i) - 1  
*/