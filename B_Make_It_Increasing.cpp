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
        ll n, cnt = 0;
        cin >> n;
        ll a[n];
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (ll i = n - 1; i > 0; i--)
        {
            while (a[i] <= a[i - 1])
            {
                if (a[i - 1] == 0)
                {
                    cnt = -1;
                    cout << "-1\n";
                    break;
                }
                cnt++;
                a[i - 1] /= 2;
            }
            if (cnt == -1)
                break;
        }
        if (cnt >= 0)
            cout << cnt << endl;
    }
    return 0;
}
