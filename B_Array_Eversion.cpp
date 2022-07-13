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
        int a[n];
        int m = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            m = max(m, a[i]);
        }
        int x = a[n - 1];
        int cnt = 0;
        if (x == m)
        {
            cout << 0 << endl;
            continue;
        }
        for (int i = n - 2; i >= 0; i--)
        {
            if (a[i] == m)
            {
                cnt++;
                break;
            }
            if (a[i] > x)
            {
                cnt++;
                x = a[i];
            }
        }
        cout << cnt << endl;
    }
    return 0;
}
