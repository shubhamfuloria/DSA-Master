
#include <bits/stdc++.h>

using namespace std;

int main()
{
  int N = 10;

  for (int i = 0; i < N; i++)
  {

    for (int j = 0; j < N - i; j++)
    {
      cout << "*";
    }
    cout << endl;
  }
}

/*

*****
****
***
**
*


i = 0 => 5 times
i = 1 => 4 times
i = 2 => 3 times
i = 3 => 2 times
i = 4 => 1 time

j loop is running 5 - i times (N - 1 - i)


*/