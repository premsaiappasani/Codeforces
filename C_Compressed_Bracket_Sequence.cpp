#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr)
int main()
{
    fast;
    ll t = 1;
    while (t--)
    {
        ll n;
        cin >> n;
        ll a[n];
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        ll cnt = 0;
        ll oldx = 0, x = 0;
        ll i = 0;
        bool brk = false;
        ll kcnt = 0;
        while (i < n)
        {
            if (i % 2)
            {
                x -= a[i];
                if (oldx > 0)
                {
                    ll k = oldx - x;
                    if (x < 0)
                    {
                        k = oldx;
                    }
                    cnt += k;
                    kcnt++;
                }
            }
            else
            {
                x += a[i];
            }
            if (x < 0)
            {
                x = 0;
                oldx = 0;
                brk = true;
                cnt += ((kcnt * (kcnt - 1)) / 2);
                kcnt = 0;
            }
            else
            {
                oldx = x;
                brk = false;
            }
            i++;
        }
        if (x <= 0)
        {
            cnt += ((kcnt * (kcnt - 1)) / 2);
        }

        cout << cnt << endl;
    }
    return 0;
}
