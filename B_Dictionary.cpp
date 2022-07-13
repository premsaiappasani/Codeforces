#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr)
int main()
{
    fast;
    string str = "aa";
    vector<string> v;
    for (int i = 0; i < 26; i++)
    {
        for (int j = 0; j < 26; j++)
        {
            if (str[1] == 'z')
            {
                str[0] = ('a' + i);
                str[1] = 'a';
            }
            else
            {
                str[1] = ('a' + j);
            }
            if (str[0] == str[1])
            {
                continue;
            }
            v.push_back(str);
        }
    }
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        for (int i = 0; i < v.size(); i++)
        {
            if (s == v[i])
            {
                cout << i + 1 << endl;
                break;
            }
        }
    }
    return 0;
}
