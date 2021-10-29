#include <bits/stdc++.h>

using namespace std;

vector<int> twoSum(vector<int> &numbers, int target)
{

    int low = 0, high = numbers.size() - 1;

    while (low < high)
    {
        int curr = numbers[low] + numbers[high];

        if (curr == target)
            return {low + 1, high + 1};

        else if (curr > target)
            high = high - 1;

        else
            low = low + 1;
    }
    return {low + 1, high + 1};
}

int main()
{
    vector<int> A = {2, 7, 11, 15};
    vector<int> ans = twoSum(A, 9);

    for (auto el : ans)
        cout << el << " ";
    cout << endl;
}

/*
We've used two pointers algorithm here. In order to find two elements which adds to target, we will take advantage
of the fact that array is sorted. Really two pointer algo is beautiful.

*/