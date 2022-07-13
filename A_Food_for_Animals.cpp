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
        ll a, b, c, x, y;
        cin >> a >> b >> c >> x >> y;
        if (a >= x)
        {
            a = 0;
            x = 0;
        }
        else
        {
            x -= a;
        }
        if (b >= y)
        {
            b = 0;
            y = 0;
        }
        else
        {
            y -= b;
        }
        if ((x + y) <= c)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}
