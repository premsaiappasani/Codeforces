#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll arr[18];

void solve()
{
    ll n;
    cin >> n;

    ll count = 0;
    for (ll i = 16; i >= 1; i--)
    {
        count = count + (n / arr[i]);
        n = n % arr[i];
    }
    if (n == 0)
        cout << count << '\n';
    else
        cout << -1 << '\n';
}

signed main()
{
    ll x = 205;
    for (int i = 1; i <= 16; i++)
    {
        x = x * 10;
        arr[i] = x;
    }
    int t;
    cin >> t;
    while (t--)
        solve();
}