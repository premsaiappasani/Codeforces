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
        ll a, b, c;
        cin >> a >> b >> c;
        ll n = (b - a);
        if (n < 0)
        {
            n *= (-1);
        }
        if ((a > (n * 2)) || (b > (n * 2)) || (c > (n * 2)))
        {
            cout << -1 << endl;
            continue;
        }
        c += n;
        if (c > (2 * n))
        {
            c -= (2 * n);
        }
        cout << c << endl;
    }
    return 0;
}
