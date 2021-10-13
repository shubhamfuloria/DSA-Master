#include<bits/stdc++.h>

using namespace std;

//faith method on permutations of string

vector<string> get_permutations(string s)
{
    if(s.empty())   return {""};

    char first = s.at(0);
    vector<string> sans = get_permutations(s.substr(1));
    vector<string> f_ans;

    for(int i = 0; i < sans.size(); i++)
    {
        string curr = sans[i];
        int n = curr.length();
        for(int j = 0; j <= n; j++)
        {
            string temp = curr;
            temp.insert(temp.begin() + j, first);
            f_ans.push_back(temp);
        }
    }
    return f_ans;
}

int main()
{
    string s = "123";
    vector<string> ans =  get_permutations(s);

    for(string i : ans)
        cout << i << endl;
}