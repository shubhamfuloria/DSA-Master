string reverse(string s)
{
    int i = s.length() - 1;
    string r = "";
    while (i >= 0)
        r += s[i--];
    return r;
}