#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr)
int main()
{
    fast;
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll a[n], b[n];
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
            b[i] = a[i];
        }
        sort(b, b + n);
        ll sx1 = 0, sx2 = 0, sy1 = 0, sy2 = 0, px1 = 1, px2 = 1, py1 = 1, py2 = 1;
        for (ll i = 0; i < n; i++)
        {
            if (i % 2)
            {
                sx2 += a[i];
                sy2 += b[i];
                px2 *= a[i];
                py2 *= b[i];
                px2 %= mod;
                py2 %= mod;
            }
            else
            {
                sx1 += a[i];
                sy1 += b[i];
                px1 *= a[i];
                py1 *= b[i];
                px1 %= mod;
                py1 %= mod;
            }
        }
        if (sx1 == sy1 && sx2 == sy2 && px1 == py1 && px2 == py2)
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
