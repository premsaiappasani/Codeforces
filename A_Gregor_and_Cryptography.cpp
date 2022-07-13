#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr)
void solve()
{
    ll p;
    cin >> p;
    if (p == 5)
    {
        cout << 2 << " " << 4 << endl;
        return;
    }
    p--;
    cout << 2 << " " << (p / 2) << endl;
    return;
}
int main()
{
    fast;
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
