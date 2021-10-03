#include <bits/stdc++.h>

using namespace std;

void permute(string S, int l, int r)
{
    if(l == r)
    {
        cout << S << endl;
        return;
    }

    for(int i = l; i <= r; i++)
    {
        swap(S[l], S[i]);
        permute(S, l + 1, r);
        
        //backtrack
        swap(S[i], S[l]);
    }
}

int main()
{
    string S = "ABC";
    permute(S, 0, S.length() - 1);
}