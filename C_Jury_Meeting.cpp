#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr)

int p = 998244353;
ll fact(ll n)
{
    if (n >= p)
        return n %= p;

    ll result = 1;
    for (int i = 1; i <= n; i++)
        result = (result * i) % p;

    return result;
}
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
        int mx = INT_MIN, maximumkannajustchinnadi = INT_MIN, mc = 0, mc2 = 0;
        ll permutationsucks = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            mx = max(mx, a[i]);
        }
        for (int i = 0; i < n; i++)
        {
            if (a[i] == mx)
            {
                mc++;
            }
            else
            {
                maximumkannajustchinnadi = max(maximumkannajustchinnadi, a[i]);
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (a[i] == maximumkannajustchinnadi)
            {
                mc2++;
            }
        }
        if ((mc > 1) || (mc2 == 0))
        {
            permutationsucks = fact(n);
            cout << permutationsucks % p << endl;
            continue;
        }
        if ((mx - maximumkannajustchinnadi) != 1)
        {
            cout << 0 << endl;
            continue;
        }
        permutationsucks = fact(n);
        permutationsucks /= fact(n - mc2 - 1);
        permutationsucks /= fact(mc2 + 1);
        permutationsucks *= mc2;
        permutationsucks %= p;
        permutationsucks *= fact(mc2);
        permutationsucks %= p;
        permutationsucks *= fact(n - mc2 - 1);
        permutationsucks %= p;
        cout << permutationsucks << endl;
    }
    return 0;
}
