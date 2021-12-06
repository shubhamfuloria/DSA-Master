#include <bits/stdc++.h>
#define ll long long

using namespace std;

bool isValid(vector<int> boards, int total_painters, long long time, long long limit)
{
  int curr_painters = 1;
  long long sum = 0;
  for (int i = 0; i < boards.size(); i++)
  {
    sum = sum + boards[i];
    if (sum > limit)
    {
      curr_painters++;
      sum = boards[i];
    }
    if (curr_painters > total_painters)
      return false;
  }
  return true;
}

int paint(int A, int B, vector<int> &C)
{

  long long max_el = INT_MIN, sum = 0;
  for (auto el : C)
    sum += el, max_el = max_el > el ? max_el : el;

  ll low = (ll)max_el, high = (ll)sum;
  int ans = -1;
  while (low <= high)
  {
    long long mid = low + (high - low) / 2;

    if (isValid(C, A, B, mid))
    {
      ans = mid;
      high = mid - 1;
    }
    else
      low = mid + 1;
  }
  return (ans*B) % 10000003;
}

int main()
{
  vector<int> boards = {1000000, 1000000};
  int A = 1, B = 1000000;
  cout << paint(A, B, boards) << endl;
}