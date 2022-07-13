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
        ll k;
        cin >> k;
        int n = sqrt(k);
        k -= (n * n);
        int i = 0, j = 0;
        if (k == 0)
        {
            cout << n << " " << 1 << endl;
            continue;
        }
        n++;
        if (k < n)
        {
            i = k;
            j = n;
        }
        else if (n == k)
        {
            i = n;
            j = n;
        }
        else
        {
            i = n;
            j = (2 * n) - k;
        }
        cout << i << " " << j << endl;
    }
    return 0;
}
