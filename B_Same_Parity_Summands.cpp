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
        int n, k;
        cin >> n >> k;
        if (n % 2)
        {
            if (k % 2 == 0)
            {
                cout << "NO\n";
                continue;
            }
        }
        if (n < k)
        {
            cout << "NO\n";
            continue;
        }
        if ((n % 2 == 0) && (k % 2))
        {
            if ((n + 2 - (2 * k)) <= 0)
            {
                cout << "NO\n";
                continue;
            }
        }
        cout << "YES\n";
        if ((n % 2 == 0) && (k % 2))
        {
            for (int i = 0; i < k - 1; i++)
            {
                cout << 2 << " ";
            }
            cout << n - (2 * k) + 2 << endl;
            continue;
        }
        for (int i = 0; i < k - 1; i++)
        {
            cout << 1 << " ";
        }
        cout << n - k + 1 << endl;
    }

    return 0;
}
