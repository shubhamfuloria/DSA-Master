#include<bits/stdc++.h>

using namespace std;

int bSearch(vector<int> &A, int low, int high, int target)
{
  while(low <= high)
  {
    int mid = low + (high - low) / 2;

    if(A[mid] == target)
      return mid;
    
    else if(target < A[mid])
      high = mid - 1;

    else
      low = mid + 1;
  }
  return -1;
}
int getMinIndex(vector<int> &A)
{
  int low = 0, high = A.size() - 1;
  int n = A.size();
  int ans = 0;
  while(low <= high)
  {
    int mid = low + (high - low) / 2;
    int prev = (n + mid - 1) % n;
  
    if(A[mid] < A[prev])
    {
      ans = mid;
      high = mid - 1;
    }
    else if(A[mid] < A[0]) //that means left part is unsorted
      high = mid - 1;
    
    else
      low = mid + 1;
  }
  return ans;
}

int search(vector<int> &A, int target)
{
  int min_index = getMinIndex(A);

  if(target > A[A.size() - 1])
    return bSearch(A, 0, min_index - 1, target);
  else
    return bSearch(A, min_index, A.size() - 1, target);
}

int main()
{
    vector<int> A = {1};
    cout << search(A, 0) << endl;
}