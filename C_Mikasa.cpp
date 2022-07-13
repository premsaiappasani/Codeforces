#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr)
unsigned int countBits(unsigned int n)
{
    unsigned int count = 0;
    while (n)
    {
        count++;
        n >>= 1;
    }
    return count;
}
int main()
{
    fast;
    int t;
    cin >> t;
    while (t--)
    {
        ll n, m;
        cin >> n >> m;
        if (m < n)
        {
            cout << 0 << "\n";
            continue;
        }
        int b = countBits(n);
        int c = 1 << b;
        b = m - (m % c);
        b--;
        bool f = true;
        for (ll i = b; i <= m; i++)
        {
            ll x = n ^ i;
            if (x > m)
            {
                cout << i << "\n";
                f = false;
                break;
            }
        }
        if (f)
        {
            cout << m + 1 << '\n';
        }
    }
    return 0;
}
