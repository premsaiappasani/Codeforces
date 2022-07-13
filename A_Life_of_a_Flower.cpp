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
        cin >> a[0];
        long long h = 1;
        if (a[0])
        {
            h++;
        }
        bool d = false;
        for (int i = 1; i < n; i++)
        {
            cin >> a[i];
            if ((a[i] == 0) && (a[i - 1] == 0))
            {
                d = true;
            }
            if (!d)
            {
                if (a[i] == 1)
                {
                    if (a[i - 1] == 1)
                    {
                        h += 5;
                    }
                    else
                    {
                        h += 1;
                    }
                }
            }
        }
        if (d)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << h << endl;
        }
    }
    return 0;
}
