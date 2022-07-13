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
        int max = INT_MIN, min = INT_MAX, x = 0, y = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] > max)
            {
                max = a[i];
                x = i;
            }
            if (a[i] < min)
            {
                min = a[i];
                y = i;
            }
        }
        if (x > y)
        {
            int temp = x;
            x = y;
            y = temp;
        }
        int m, mm, mmm;
        x++;
        y++;
        m = y;
        mm = n - x + 1;
        mmm = x + n - y + 1;

        if (m <= mm && m <= mmm)
        {
            cout << m << endl;
            continue;
        }
        if (mm <= m && mm <= mmm)
        {
            cout << mm << endl;
            continue;
        }
        cout << mmm << endl;
    }
    return 0;
}