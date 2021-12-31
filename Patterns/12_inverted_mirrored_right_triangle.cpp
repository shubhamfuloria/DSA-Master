
#include <bits/stdc++.h>

using namespace std;

int main()
{
  int N = 10;

  for (int i = 0; i < N; i++)
  {

    for (int j = 0; j < i; j++)
      cout << " ";

    for (int j = 0; j < N - i; j++)
      cout << "*";

    cout << endl;
  }
}

/*
*****
 ****
  ***
   **
    *
    
Spaces: 
i = 0 => 0 times
i = 1 => 1 times
i = 2 => 2 times
i = 3 => 3 times
i = 4 => 4 times

spaces are printing i times

*/