#include <bits/stdc++.h>
using namespace std;

int main()
{
    int testis;
    cin >> testis;
    while (testis--)
    {
        string s, t;
        cin >> s;
        cin >> t;
        int n = t.length();
        int hasa = 0;
        for (int i = 0; i < n; i++)
        {
            if (t[i] == 'a')
            {
                hasa = 1;
            }
        }
        if (n == 1 && hasa == 1)
        {
            cout << 1 << "\n";
        }
        else if (hasa == 1)
        {
            cout << -1 << "\n";
        }
        if (hasa != 1)
        {
            long long x = pow(2, s.length()) + 1e-9;
            cout << x << "\n";
        }
    }
}