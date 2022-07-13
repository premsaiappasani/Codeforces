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
        ll xr = 0;
        for (int i = 1; i <= n; i++)
        {
            xr ^= i;
        }
        cout << xr << endl;
        if (n % 4 == 0)
        {
            xr = n ^ 0;
        }
        else if (n % 4 == 1)
        {
            xr = 1;
        }
        else if (n % 4 == 2)
        {
            xr = (n + 1) ^ 0;
        }
        else
        {
            xr = 0;
        }
        cout << xr << endl;
    }
    return 0;
}
