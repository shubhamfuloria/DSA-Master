#include<bits/stdc++.h>

using namespace std;


class Solution {
public:
    int mySqrt(int x) {
        
        float low = 0, high = x;
        
        while((int)high != (int)low)
        {
            float mid = (low + high) / 2;
            
            float curr = mid * mid;
            
            if(curr == x)   
                return mid;
            
            else if(curr > x)   
                high = mid;
            
            else
                low = mid;
        }
        return (int)high;
    }
};

int main()
{
    Solution s;

    cout << s.mySqrt(8192) << endl;
}