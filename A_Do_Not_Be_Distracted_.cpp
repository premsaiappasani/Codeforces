#include <bits/stdc++.h>
#include <string.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, f = 0;
        cin >> n;
        string s, str = "";
        cin >> s;
        for (int i = 0; i < n; i++)
        {
            int c;
            c = str.find(s[i]);
            if (c == string::npos)
            {
                str += s[i];
                f = 1;
                continue;
            }
            if (c == str.length() - 1)
            {
                f = 1;
                continue;
            }
            else
            {
                cout << "NO" << endl;
                f = 0;
                break;
            }
        }
        if (f == 1)
        {
            cout << "YES" << endl;
        }
    }
    return 0;
}