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
        ll W, H;
        cin >> W >> H;
        ll x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        ll w, h;
        cin >> w >> h;
        ll cw = abs(x2 - x1), ch = abs(y2 - y1);
        ll rw = W - cw, rh = H - ch;
        if (w <= rw || h <= rh)
        {
            if (x1 >= w || (W - x2) >= w || y1 >= h || (H - y2) >= h)
            {
                cout << 0 << "\n";
                continue;
            }
            if (w <= rw && h <= rh)
                cout << min(abs(x1 - w), min(abs(W - x2 - w), min(abs(y1 - h), abs(H - y2 - h)))) << "\n";
            else if (w <= rw)
                cout << min(abs(x1 - w), abs(W - x2 - w)) << "\n";
            else if (h <= rh)
                cout << min(abs(y1 - h), abs(H - y2 - h)) << "\n";
        }
        else
            cout << -1 << "\n";
    }
    return 0;
}
