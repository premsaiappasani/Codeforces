#include <bits/stdc++.h>
using namespace std;
bool comp(int a, int b)
{
    return (a < b);
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        long long h[n];
        for (long long i = 0; i < n; i++)
        {
            cin >> h[i];
        }
        sort(h, h + n);
        if (n < 3)
        {
            for (long long i = 0; i < n; i++)
            {
                cout << h[i] << " ";
            }
            cout << endl;
            continue;
        }
        long long a, b, min = INT_MAX;
        for (long long i = 1; i < n; i++)
        {
            if (h[i] - h[i - 1] < min)
            {
                min = (h[i] - h[i - 1]);
                a = i - 1;
                b = i;
            }
        }
        long long temp = h[a];
        h[a] = h[0];
        h[0] = temp;
        temp = h[b];
        h[b] = h[n - 1];
        h[n - 1] = temp;

        if (n > 3)
        {
            sort(h + b, h + n - 1);
            sort(h + 1, h + a + 1);
        }
        if (n == 3)
        {
            cout << h[0] << " " << h[1] << " " << h[2] << endl;
            continue;
        }
        cout << h[0] << " ";

        for (long long i = b; i < n - 1; i++)
        {
            cout << h[i] << " ";
        }
        for (long long i = 1; i < a + 1; i++)
        {
            cout << h[i] << " ";
        }
        cout << h[n - 1] << endl;
    }
    return 0;
}