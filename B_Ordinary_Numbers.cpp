#include <bits/stdc++.h>
#include <math.h>
using namespace std;

int countDigit(long long int n)
{
    int count = 0;
    while (n != 0)
    {
        n = n / 10;
        ++count;
    }
    return count;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n;
        cin >> n;
        if (n < 10)
        {
            cout << n << endl;
            continue;
        }
        long long int sum = 0, x = 0, y = 0, count = 0;
        int d = countDigit(n);
        sum += (9 * (d - 1));
        y = pow(10, d - 1);
        x = y;
        y *= 2;
        while (n >= y)
        {
            count++;
            y += x;
        }
        sum += count;
        count++;
        int temp = 0;
        for (int i = 0; i < d; i++)
        {
            temp += count;
            count *= 10;
        }
        if (temp <= n)
        {
            sum++;
        }
        cout << sum << endl;
    }
    return 0;
}