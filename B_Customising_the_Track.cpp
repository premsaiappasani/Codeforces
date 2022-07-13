#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        ll a, sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a;
            sum += a;
            a = 0;
        }
        ll q = sum / n;
        q++;
        ll x, y;
        x = q * n;
        x -= sum;
        y = n - x;
        cout << x * y << "\n";
    }
    return 0;
}