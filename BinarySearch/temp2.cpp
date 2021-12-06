#include<bits/stdc++.h>
#define ll long long

using namespace std;

bool ifPossible(int A, int B, vector<int> &C, ll mid)
{
    int curr_painters = 1;
    ll curr_time = 0;
    for (int i = 0; i < C.size(); i++)
    {
        curr_time += (ll)C[i] * (ll)B;

        if (curr_time > mid)
        {
            curr_painters++;
            curr_time = C[i] * (ll)B;
        }
        if (curr_painters > A)
            return false;
    }
    return true;
}

int paint(int A, int B, vector<int> &C) 
{
    int maximum = INT_MIN;
    ll sum = 0;
    ll mod = 10000003;

    for (int el : C)
        maximum = max(el, maximum), sum += el;

    ll start = (ll)maximum * (ll)B;
    ll end = sum * (ll)B;
    ll ans = -1;
    while (start <= end)
    {
        cout << "I am running" << endl;
        ll mid = start + (end - start) / 2;

        if (ifPossible(A, B, C, mid))
            ans = mid, end = mid - 1;

        else
            start = mid + 1;
    }
    return ans % mod;
}


int main()
{
  vector<int> C = {1};
  int A = 1;
  int B = 1;

  cout << paint(A, B, C) << endl;

}