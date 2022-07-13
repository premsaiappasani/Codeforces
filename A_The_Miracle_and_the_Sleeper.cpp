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
        ll l, r;
        cin >> l >> r;
        if ((l * 2) > r)
        {
            cout << r - l << endl;
            continue;
        }
        if (r % 2)
        {
            cout << r / 2 << endl;
        }
        else
        {
            cout << (r / 2) - 1 << endl;
        }
    }
    return 0;
}
