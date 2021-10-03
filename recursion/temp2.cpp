#include<bits/stdc++.h>

using namespace std;

int minSteps(vector<int> origin, vector<int> dest)
{
    int dest_diff = dest[1] - dest[0];
    int origin_diff = origin[1] - origin[0];

    int total_steps = abs(origin_diff - dest_diff);

    return total_steps;


}

int main() 
{
    cout << minSteps({6, 4}, {2, 1}) << endl;
}