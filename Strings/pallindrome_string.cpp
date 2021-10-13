#include<iostream>
#include<string>
#include<bits/stdc++.h>

using namespace std;


//Given a string, determine if it is a palindrome, considering only alphanumeric characters and ignoring cases.

string toLower(string S)
{
    for(int i = 0; i < S.length(); i++)
    {
        if(S[i] >= 'A' and S[i] <= 'Z')
            S[i] = S[i] + 32;
    }
    return S;
}

string only_alphanumeric(string S)
{
    string r;
    for(auto c : S)
    {
        if((c >= 'a' and c <= 'z') or (c >= '0' and c <= '9')) 
            r.push_back(c);
    }
    return r;
}

bool isPallindrom(string S)
{
    int low = 0, high = S.length() - 1;

    while(low < high)
        if(S[low++] != S[high--])
            return false;

    return true;
}

int main()
{
    string S = "A man, a plan, a canal: Panama";
    S = toLower(S);
    S = only_alphanumeric(S);
    cout << isPallindrom(S) << endl;
}