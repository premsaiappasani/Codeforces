#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr)
int main()
{
    fast;
    int tst;
    cin >> tst;
    while (tst--)
    {
        ll n;
        cin >> n;
        ll a = 0;
        if (n % 2)
            n++;
        if (n <= 6)
            cout << 15 << endl;
        else if (n % 6 == 0)
            cout << (n / 6) * 15 << endl;
        else if (n % 6 > 4)
            cout << (n / 6 + 1) * 15 << endl;
        else if (n % 6 > 2)
            cout << ((n - 10) / 6) * 15 + 25 << endl;
        else
            cout << ((n - 8) / 6) * 15 + 20 << endl;
    }
    return 0;
}
