
#include <bits/stdc++.h>

using namespace std;

int main()
{
  int N = 10;

  for (int i = 0; i < N; i++)
  {

    for (int j = 0; j < N - 1 - i; j++)
      cout << " ";

    for (int j = 0; j < i + 1; j++)
    {
      if (j == 0 or j == i or i == 0 or i == N - 1)
        cout << "*";
      else
        cout << " ";
    }
    cout << endl;
  }
}

/*

stars

i = 0 => j = 0
i = 1 => j = 0, 1
i = 2 => j = 0, 2
i = 3 => j = 0, 3
i = 4 => j = 0, 4


*/