#include <bits/stdc++.h>

using namespace std;

int main()
{
  int N = 5;

  for (int i = 0; i < N; i++)
  {

    for (int j = 0; j < N - 1 - i; j++)
      cout << " ";

    for (int j = 0; j < N; j++)
      cout << "*";

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
let's think about spaces before star

i = 0 => j = 0, 1, 2, 3
i = 1 => j = 0, 1, 2
i = 2 => j = 0, 1
i = 3 => j = 0
i = 4 => 

In 0th iteration of i we want space loop to be run 4 times
In 1st iteration of i we want space loop to be run 3 times
In 2nd iteration of i we want space loop to be run 2 times
In 3rd iteration of i we want space loop to be run 1 times
In 4th iteration of i we want space loop to be run 0 times

i    j loop
0 ->   4
1 ->   3
2 ->   2
3 ->   1
4 ->   0


I can clearly see j = 4 - i (N - 1 - i)


*/