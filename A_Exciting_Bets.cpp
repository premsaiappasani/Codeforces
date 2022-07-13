#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long a, b, g = 0, ct = 0;
        cin >> a >> b;
        if (a == b)
        {
            cout << "0 0\n";
            continue;
        }
        if (a > b)
        {
            g = a;
            a = b;
            b = g;
        }
        g = b - a;
        ct = b % g;
        if ((2 * ct) < g)
        {
            cout << g << " " << ct << "\n";
            continue;
        }
        cout << g << " " << g - ct << "\n";
    }
    return 0;
}