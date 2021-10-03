#include <bits/stdc++.h>

using namespace std;

static vector<string> Codes = {"", "", "ABC", "DEF", "GHI", "JKL", "MNO", "PQRS", "TUV", "WXYZ"};


void print_KBC(string S, string ans)
{
    if(S.empty())  
    {
        cout << ans << endl;
        return;
    }

    char ch = S.at(0); 
    string roq = S.substr(1);

    string codes_for_ch = Codes[ch - '0'];

    for(char c : codes_for_ch)
        print_KBC(roq, ans + c);
}



int main()
{
    string S = "456";
    string ans;
    print_KBC(S, ans);
}