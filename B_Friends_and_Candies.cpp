#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        long long sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += a[i];
        }
        if (n == 1)
        {
            cout << 0 << endl;
            continue;
        }
        if (sum % n)
        {
            cout << "-1" << endl;
            continue;
        }
        int q = sum / n;
        int c = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] > q)
            {
                c++;
            }
        }
        cout << c << endl;
    }
    return 0;
}