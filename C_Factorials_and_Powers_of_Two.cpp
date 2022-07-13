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
    int nn = 1000000000000;
    ll s;
    ll i = 1, x = 1;
    while (x < nn)
    {
        s.insert(x * i);
        x *= i;
        i++;
    }

    while (t--)
    {
    }
    return 0;
}
