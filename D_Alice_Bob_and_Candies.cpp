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
        int s1 = 0, s2 = 0;
        int x = 0, y = 0;
        int i = 0, j = n - 1;
        int cnt = 0;
        bool flag = false;
        while (true)
        {
            //i
            x = 0;
            cnt++;
            do
            {
                if (i > j)
                {
                    if (x == 0)
                    {
                        cnt--;
                    }
                    cout << cnt << " " << s1 << " " << s2 << endl;
                    flag = true;
                    break;
                }
                x += a[i];
                s1 += a[i];
                i++;
            } while (x <= y);
            //j
            y = 0;
            if (flag)
            {
                break;
            }
            cnt++;
            do
            {
                if (i > j)
                {
                    if (y == 0)
                    {
                        cnt--;
                    }
                    cout << cnt << " " << s1 << " " << s2 << endl;
                    flag = true;
                    break;
                }
                y += a[j];
                s2 += a[j];
                j--;
            } while (y <= x);
            if (flag)
            {
                break;
            }
        }
    }
    return 0;
}
