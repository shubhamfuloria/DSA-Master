#include<bits/stdc++.h>

using namespace std;

int search(vector<int> & A, int target)
{
  int start = 0, end = A.size() - 1;

  while(start <= end)
  {
    int mid = start + ( end - start ) / 2;

    if(A[mid] == target)  return mid;

    else if(A[0] < A[mid]) //left part of array is sorted
    {
      if(A[start] <= target and target <= A[mid - 1]) //if it's true : then definately our target will lie in the left part
        end = mid - 1;
      
      else  //else our target will lie in right part
        start = mid + 1;
    }

    else //right part of array is sorted
    {
      if(A[mid + 1] <= target and target <= A[end]) //if it's true : then definately our target will lie in the right part
        start = mid + 1;
      
      else  //else target will lie in left part
        end = mid - 1;
    }
  }
  return -1;
}


int main()
{
  vector<int> A = {5, 7, 9, 2, 4};
  cout << search(A, 100) << endl;    
}