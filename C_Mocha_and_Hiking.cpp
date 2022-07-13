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
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        if (a[0] == 1)
        {
            cout << n + 1 << " ";
            for (int i = 0; i < n; i++)
            {
                cout << i + 1 << " ";
            }
            cout << endl;
            continue;
        }
        if (a[n - 1] == 0)
        {
            for (int i = 0; i < n; i++)
            {
                cout << i + 1 << " ";
            }
            cout << n + 1 << endl;
            continue;
        }
        int x = -1;
        for (int i = 0; i < n - 1; i++)
        {
            if (a[i] == 0 && a[i + 1] == 1)
            {
                x = i;
                break;
            }
        }
        if (x == -1)
        {
            cout << -1 << endl;
            continue;
        }
        for (int i = 0; i <= x; i++)
        {
            cout << i + 1 << " ";
        }
        cout << n + 1 << " ";
        for (int i = x + 1; i < n; i++)
        {
            cout << i + 1 << " ";
        }
        cout << endl;
    }
    return 0;
}
