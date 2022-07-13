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
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        if (n == 1)
        {
            cout << a[0] << endl;
            continue;
        }
        sort(a, a + n);
        ll x = a[0];
        for (int i = 1; i < n; i++)
        {
            x = x & a[i];
        }
        cout << x << endl;
    }
    return 0;
}
