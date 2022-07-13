#include <bits/stdc++.h>
using namespace std;
long long dist(long long i, long long j, long long p, long long q)
{
    long long x = (i + j) - p - q;
    if (x < 0)
    {
        x *= (-1);
    }
    return x;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, m, i, j;
        cin >> n >> m >> i >> j;
        long long a[3], b[3], c[3], d[3];
        a[0] = 1;
        a[1] = 1;
        b[0] = n;
        b[1] = 1;
        c[0] = n;
        c[1] = m;
        d[0] = 1;
        d[1] = m;
        a[2] = (i + j) - a[0] - a[1];
        if (a[2] < 0)
        {
            a[2] *= (-1);
        }
        b[2] = (i + j) - b[0] - b[1];
        if (b[2] < 0)
        {
            b[2] *= (-1);
        }
        c[2] = (i + j) - c[0] - c[1];
        if (c[2] < 0)
        {
            c[2] *= (-1);
        }
        d[2] = (i + j) - d[0] - d[1];
        if (d[2] < 0)
        {
            d[2] *= (-1);
        }
        long long max[4] = {0};
        long long temp = INT_MIN, sum = 0;
        sum = dist(a[0], a[1], b[0], b[1]) + a[2] + b[2];
        if (temp < sum)
        {
            temp = sum;
            max[0] = a[0];
            max[1] = a[1];
            max[2] = b[0];
            max[3] = b[1];
        }
        sum = dist(a[0], a[1], c[0], c[1]) + c[2] + a[2];
        if (temp < sum)
        {
            temp = sum;
            max[0] = a[0];
            max[1] = a[1];
            max[2] = c[0];
            max[3] = c[1];
        }
        sum = dist(a[0], a[1], d[0], d[1]) + a[2] + d[2];
        if (temp < sum)
        {
            temp = sum;
            max[0] = a[0];
            max[1] = a[1];
            max[2] = d[0];
            max[3] = d[1];
        }
        sum = dist(c[0], c[1], b[0], b[1]) + c[2] + b[2];
        if (temp < sum)
        {
            temp = sum;
            max[0] = b[0];
            max[1] = b[1];
            max[2] = c[0];
            max[3] = c[1];
        }
        sum = dist(d[0], d[1], b[0], b[1]) + d[2] + b[2];
        if (temp < sum)
        {
            temp = sum;
            max[0] = b[0];
            max[1] = b[1];
            max[2] = d[0];
            max[3] = d[1];
        }
        sum = dist(c[0], c[1], d[0], d[1]) + d[2] + c[2];
        if (temp < sum)
        {
            temp = sum;
            max[0] = d[0];
            max[1] = d[1];
            max[2] = c[0];
            max[3] = c[1];
        }
        cout << max[0] << " " << max[1] << " " << max[2] << " " << max[3] << endl;
    }
    return 0;
}