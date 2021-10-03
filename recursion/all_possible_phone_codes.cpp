#include <bits/stdc++.h>

using namespace std;

static vector<string> Codes = {"", "", "ABC", "DEF", "GHI", "JKL", "MNO", "PQRS", "TUV", "WXYZ"};

vector<string> getCodes(string S)
{
    if(S.length() == 0)
        return {""};
    //234

    int ch = (int)S.at(0) - 48; //2
    string sargs = S.substr(1, S.length() - 1); //34



    vector<string> sans = getCodes(sargs);
    vector<string> bans;
    string code_for_ch = Codes[ch]; //Codes[2];

    for(int i = 0; i < code_for_ch.length(); i++)
    {
        char ch_code = code_for_ch[i];
        for(string s : sans)
        {
            bans.push_back(ch_code + s);
        }
    }

    return bans;
}

int main()
{
    string S = "234";
    vector<string> ans = getCodes(S);

    for(string i : ans)
        cout << i << "\t";
    cout << endl;
}