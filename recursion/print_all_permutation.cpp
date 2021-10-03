#include <iostream>
#include <string>

using namespace std;

void print_permutations(string S, string ans)
{
    if (S.empty())
    {
        cout << ans << endl;
        return;
    }
    if (S.at(0) == '0')
        return;

    //case 1 : choosing first 1 character
    string ch = S.substr(0, 1);
    int chInt = stoi(ch);
    char c = chInt + 'a' - 1;
    if (c >= 'a' and c <= 'z')
        print_permutations(S.substr(1), ans + c);

    //case 2 : choosing first 2 characters
    if (S.length() >= 2)
    {
        ch = S.substr(0, 2);
        chInt = stoi(ch);
        c = chInt + 'a' - 1;
        if (c >= 'a' and c <= 'z')
            print_permutations(S.substr(2), ans + c);
    }
}

int main()
{
    string S = "303";

    print_permutations(S, "");
}