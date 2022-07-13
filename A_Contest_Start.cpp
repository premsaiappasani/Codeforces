#include <bits/stdc++.h>
using namespace std;
int main()
{
    int k;
    cin >> k;
    while (k--)
    {
        long long n, x, t;
        cin >> n >> x >> t;
        if (x > t || n == 1)
        {
            cout << 0 << endl;
            continue;
        }
        long long a = t / x;
        long long sum = 0;
        if ((x * n) < t)
        {
            sum = n * (n - 1) / 2;
            cout << sum << endl;
            continue;
        }
        sum = 0;
        sum = a * (a - 1) / 2;
        sum += ((n - a) * a);
        cout << sum << endl;
    }
    return 0;
}