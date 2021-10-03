#include<bits/stdc++.h>

using namespace std;

void removeLeadingZero(vector<int> &A)
{
    auto it  = A.begin();

    while(it != A.end())
    {
        if(*it == 0)
            A.erase(it);

        else
            break;
    }
}

int main()
{
    vector<int> A = {0, 1, 2, 3};

    removeLeadingZero(A);

    reverse(A.begin(), A.end());

    int carry = 0; 
    if(A[0] + 1 > 9)
    {
        A[0] = (A[0] + 1) % 10;
        carry = 1;
    }
    else
        A[0] = A[0] + 1;


    for(int i = 1; i < A.size(); i++)
    {
        //3 2 1

        int curr_sum = A[i] + carry;
        if(curr_sum > 9)
        {
            A[i] = (A[i] + carry) % 10;
            carry = 1;
        }
        else
        {
            A[i] = A[i] + carry;
            carry = 0;
        }
    }
    if(carry > 0)
        A.push_back(carry);
    reverse(A.begin(), A.end());

    for(auto i : A)
        cout << i << " ";
    cout << endl;


}