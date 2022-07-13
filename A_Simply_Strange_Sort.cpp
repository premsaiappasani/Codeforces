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
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int cnt = 0;
        for (int j = 0; j < n - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                cnt = 1;
                break;
            }
        }
        if (cnt == 0)
        {
            cout << 0 << endl;
            continue;
        }
        for (int i = 0; i < n; i++)
        {
            cnt = 0;
            if (i % 2 == 0)
            {
                for (int j = 0; j < n - 2; j += 2)
                {
                    if (a[j] > a[j + 1])
                    {
                        a[j] = a[j + 1] + a[j];
                        a[j + 1] = a[j] - a[j + 1];
                        a[j] = a[j] - a[j + 1];
                    }
                }
            }
            else
            {
                for (int j = 1; j < n - 1; j += 2)
                {
                    if (a[j] > a[j + 1])
                    {
                        a[j] = a[j + 1] + a[j];
                        a[j + 1] = a[j] - a[j + 1];
                        a[j] = a[j] - a[j + 1];
                    }
                }
            }

            for (int j = 0; j < n - 1; j++)
            {
                if (a[j] > a[j + 1])
                {
                    cnt = i + 1;
                    break;
                }
                //cout << a[j] << " a ";
            }
            if (cnt == 0)
            {
                cnt = i + 1;
                break;
            }
            //cout << endl;
        }
        if (cnt)
        {
            cout << cnt << endl;
            continue;
        }
        cout << n << endl;
    }
    return 0;
}
