#include <bits/stdc++.h>
using namespace std;

int s(char c)
{
    int x = c - '0';
    return x;
}
void plus(string s1, string s2)
{
    string s3 = "", s4 = "";
    int i = max(s1.length(), s2.length());
    while (s1.length() - s2.length() > 0)
    {
        s2 = " " + s2;
    }
    while (s2.length() - s1.length() > 0)
    {
        s1 = " " + s1;
    }
    while (i--)
    {
    }
}
int main(int argc, char const *argv[])
{
    int t;
    cin >> t;
    while (t--)
    {
        string s1, s2;
        char c;
        cin >> s1 >> c >> s2;
        if (c == '+')
        {
            plus(s1, s2);
        }
        if (c == '-')
        {
            minus(s1, s2);
        }
        if (c == '*')
        {
            into(s1, s2);
        }
    }
    return 0;
}
