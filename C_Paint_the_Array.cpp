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
        int n;
        cin >> n;
        ll a[n];
        cin >> a[0] >> a[1];
        ll g1 = a[0], g2 = a[1];
        for (int i = 2; i < n; i++)
        {
            cin >> a[i];
            if (i % 2)
            {
                g2 = __gcd(g2, a[i]);
            }
            else
            {
                g1 = __gcd(g1, a[i]);
            }
        }
        if (g1 == 1 && g2 == 1)
        {
            cout << 0 << endl;
            continue;
        }
        bool f = false;
        if (g1 > 1)
        {
            for (int i = 1; i < n; i += 2)
            {
                if (a[i] % g1 == 0)
                {
                    f = true;
                    break;
                }
            }
        }
        bool g = false;
        if (g2 > 1)
        {
            for (int i = 0; i < n; i += 2)
            {
                if (a[i] % g2 == 0)
                {
                    g = true;
                    break;
                }
            }
        }
        if ((!f) && (!g))
        {
            if (g1 > 1)
            {
                cout << g1 << endl;
                continue;
            }
            else if (g2 > 1)
            {
                cout << g2 << endl;
                continue;
            }
            else
            {
                cout << 0 << endl;
                continue;
            }
        }
        if ((!f) && g)
        {
            if (g1 > 1)
            {
                cout << g1 << endl;
                continue;
            }
            else
            {
                cout << 0 << endl;
                continue;
            }
        }
        if ((!g) && f)
        {
            if (g2 > 1)
            {
                cout << g2 << endl;
                continue;
            }
            else
            {
                cout << 0 << endl;
                continue;
            }
        }
        if (f && g)
        {
            cout << 0 << endl;
        }
    }
    return 0;
}
