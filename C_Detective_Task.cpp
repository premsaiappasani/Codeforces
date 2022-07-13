#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        /* code */
        string s;
        cin >> s;
        int l = 0, r = s.length() - 1;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '1')
                l = i;
            else if (s[i] == '0')
            {
                r = i;
                break;
            }
        }
        cout << r - l + 1 << endl;
    }
}