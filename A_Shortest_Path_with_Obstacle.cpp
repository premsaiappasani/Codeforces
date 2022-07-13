#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int a, b, c, d, e, f, sum;
        cin >> a >> b >> c >> d >> e >> f;
        sum = abs(c - a) + abs(d - b);
        if (((a == c && c == e) && !(b == d && d == f) && !(((f < b) && (f < d)) || (f > b && f > d))) || (!(a == c && c == e) && (b == d && d == f)) && !(((e < a) && (e < c)) || (e > a && e > c)))
            sum += 2;
        cout << sum << "\n";
    }
    return 0;
}