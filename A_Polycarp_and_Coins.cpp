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
        ll x = n % 3;
        ll y = n / 3;
        if (x == 0)
        {
            cout << y << " " << y << "\n";
        }
        else
        {
            if (x == 1)
            {
                cout << (y + 1) << " " << y << "\n";
            }
            else
            {
                cout << y << " " << (y + 1) << "\n";
            }
        }
    }
    return 0;
}
