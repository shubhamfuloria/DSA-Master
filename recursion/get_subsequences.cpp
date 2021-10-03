#include<bits/stdc++.h>

using namespace std;

vector<string> get_subsequence(string S)
{
    if(S.length() == 0)
        return {""};

    char ch = S[0];
    vector<string> sans = get_subsequence(S.substr(1, S.length() - 1));
    vector<string> bans;
    for(string i : sans)
    {
        bans.push_back(i);
        bans.push_back(ch + i);
    }
    return bans;
}

int main()
{
    string S = "abc";
    vector<string> A = get_subsequence(S);

    for(auto i : A)
        cout << i << endl;
}

/*
Expectation: Fun("abc") -> will return a vector of string containing all the subsequences of "abc" 
which are
"", "c", "b", "bc", "a", "ac", "ab", "abc" => 2^n subsequences 


Establishing the Faith : if I call F("bc") -> will return me the vector of string containing all the subsequences of "bc"
This function already know how to get that vector have complete faith in it 

So it will return {"", "c", "b", "bc"}
Now we can add 'a' to these strings and not add 'a' then we'll get our answer !
We ran the loop for that and got our final answer :)

*/