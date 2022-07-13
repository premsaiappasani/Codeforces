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
        int a[n] = {0};
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += a[i];
        }
        sum -= n;
        if (sum == 0)
        {
            cout << 0 << endl;
        }
        else if (sum > 0)
        {
            cout << sum << endl;
        }
        else
        {
            cout << 1 << endl;
        }
    }
    return 0;
}