#include<bits/stdc++.h>

using namespace std;

bool isValid(vector<int> boards, int total_painters, int time, int limit)
{
    int curr_painters = 1;
    int sum = 0;
    for(int i = 0; i < boards.size(); i++)
    {
        sum = sum + boards[i] * time;
        if(sum > limit)
        {
            curr_painters++;
            sum = boards[i] * time;
        }
        if(curr_painters > total_painters)
            return false;
    }
    return true;
}

int paint(int A, int B, vector<int> &C) {
    
    int max_el = INT_MIN, sum = 0;
    for(auto el : C)
        sum += el, max_el = max(max_el, el);

    int low = max_el * B, high = sum * B;
    int ans = -1;
    while(low <= high)
    {
        int mid = low + 
        (high - low) / 2;

        if(isValid(C, A, B, mid))
        {
            ans = mid;
            high = mid - 1;
        }
        else
            low = mid + 1;
    }
    return ans;
}


int main()
{
  vector<int> boards = {1000000, 1000000};
  int A = 1, B = 1000000;
  cout << paint(A, B, boards) << endl;
}