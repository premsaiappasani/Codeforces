#include <bits/stdc++.h>
using namespace std;
int main()
{
    int to;
    cin >> to;

    while (to--)
    {
        int a, b, c, e, f = 0;
        string s;
        cin >> s;
        int j = s.find('a');
        if (j == -1)
        {
            cout << "NO" << endl;
            continue;
        }
        a = j - 1;
        b = j + 1;
        c = s.length();
        char d = 'a' + 1;
        while (a > -1 && b < c)
        {
            if (d == s[a])
                a--;
            else if (d == s[b])
                b++;
            else
            {
                f = -1;
                break;
            }
            d++;
        }
        while (a > -1)
        {
            if (d == s[a])
            {
                a--;
            }
            else
            {
                f = -1;
                break;
            }
            d++;
        }

        while (b < c)
        {
            if (d == s[b])
            {
                ++b;
            }
            else
            {
                f = -1;
                break;
            }
            ++d;
        }
        if (f == 0)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
    return 0;
}