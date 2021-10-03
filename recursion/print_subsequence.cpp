#include<bits/stdc++.h>

using namespace std;

void printss(string S, string ans)
{
    if(S.empty())
    {
        cout << ans << endl;
        return;
    }
    
    char ch = S[0];
    string roq = S.substr(1);

    printss(roq, ans + ch);
    printss(roq, ans);

}

int main()
{
    string S = "abc";
    string ans;
    printss(S, ans);
}