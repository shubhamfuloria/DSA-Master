#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
  bool search(vector<int> &nums, int target)
  {
    int start = 0, end = nums.size() - 1;
    int n = nums.size();
    while (start <= end)
    {
      int mid = start + (end - start) / 2;

      if (nums[mid] == target)
        return true;

      else if (nums[start] == nums[mid] and nums[mid] == nums[end])
        start++, end--;

      else if (nums[start] <= nums[mid]) //left part is sorted
      {
        if (nums[start] <= target and target < nums[mid])
          end = mid - 1;

        else
          start = mid + 1;
      }
      else //right part is sorted
      {
        if (nums[mid] < target and target <= nums[end])
          start = mid + 1;
        else
          end = mid - 1;
      }
    }
    return false;
  }
};
int main()
{
}