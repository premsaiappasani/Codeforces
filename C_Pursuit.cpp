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
        ll a[n];
        ll b[n];
        ll temp = n;
        ll k;
        ll s1 = 0, s2 = 0;
        k = n / 4;
        k--;
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (ll i = 0; i < n; i++)
        {
            cin >> b[i];
        }

        sort(a, a + n);
        sort(b, b + n);
        for (ll i = 0; i < n; i++)
        {
            if (i > k)
            {
                s1 += a[i];
                s2 += b[i];
            }
        }
        if (s1 >= s2)
        {
            cout << 0 << endl;
            continue;
        }
        k = n / 4;
        ll oldk = k, oldn = n;
        ll x = k - 1;
        for (ll i = 0; i < 1000000000; i++)
        {
            k = n / 4;
            if (oldk == k)
            {
                s1 += 100;
                if (i < k && x >= 0)
                {
                    s2 += b[x];
                    x--;
                }
            }
            else
            {
                s1 += 100;
                s1 -= a[k - 1];
            }
            n++;
            oldk = k;
            if (s1 >= s2)
            {
                cout << i + 1 << endl;
                break;
            }
        }
    }
    return 0;
}
