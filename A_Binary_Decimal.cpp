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
        int a[9] = {0};
        int k = 9;
        if (n == 1000000000)
        {
            cout << 1 << endl;
            continue;
        }
        while (k-- && n)
        {
            a[k] = (n % 10);
            n /= 10;
        }
        k = 9;
        int max = INT_MIN;
        while (k--)
        {
            if (max < a[k])
            {
                max = a[k];
            }
        }
        cout << max << "\n";
    }
    return 0;
}
