
#include <bits/stdc++.h>

using namespace std;

int main()
{
  int N = 10;

  for (int i = 0; i < N; i++)
  {

    for (int j = 0; j < i + 1; j++)
    {
      if (i == 0 or i == N - 1 or j == 0 or j == i)
        cout << "*";
      else
        cout << " ";
    }
    cout << endl;
  }
}

/*
*
**
* *
*  *
*****   


i = 0 => j = 0
i = 1 => j = 0, 1
i = 2 => j = 0, 2
i = 3 => j = 0, 3
i = 4 => j = 0, 1, 2, 3, 4

for first and last row star is printing 
for other rows only for j == 0 and j == i star is printing
*/