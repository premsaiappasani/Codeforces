#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr)
int main()
{
    fast;
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        string s1 = "", s2 = "";
        for (int i = 0; i < s.length(); i++)
        {
            if (i % 2)
            {
                s2 += s[i];
            }
            else
            {
                s1 += s[i];
            }
        }
        if (s2.empty())
        {
            cout << stoi(s1) - 1 << endl;
        }
        else
        {
            cout << (stoi(s1) + 1) * (stoi(s2) + 1) - 2 << endl;
        }
    }
    return 0;
}
