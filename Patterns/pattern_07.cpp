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
      if (i == 0 or j == 0 or i == N - 1 or j == N - 1)
        cout << "*";

      else
        cout << " ";
    }
    cout << endl;
  }
}
