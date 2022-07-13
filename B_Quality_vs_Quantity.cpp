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
        ll n;
        cin >> n;
        ll a[n];
        cin >> a[0];
        for (int i = 1; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a + n, greater<int>());
        ll x = a[0], y = a[n - 1], q = 1, m = 1, i = 0, j = n - 1;
        // cout << endl;
        bool f = true;
        while (i < j)
        {
            if ((x > y) && (q < m))
            {
                cout << "YES\n";
                f = false;
                break;
            }
            if ((q >= m) && (x >= y))
            {
                j--;
                y += a[j];
                m++;
            }
            if ((x <= y) && (q < m))
            {
                i++;
                x += a[i];
                q++;
            }
        }
        if (f)
        {
            cout << "NO\n";
        }
    }
    return 0;
}
