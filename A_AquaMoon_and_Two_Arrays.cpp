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
        int a[n], b[n], s1 = 0, s2 = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            s1 += a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
            s2 += b[i];
        }
        if (s1 != s2)
        {
            cout << "-1\n";
            continue;
        }
        ll p = 0, temp = 0;
        vector<int> v;
        for (int i = 1; i < n; i++)
        {
            temp = b[i - 1] - a[i - 1];
            int j = i;
            while (temp > 0 && (a[j] < temp) && j < n)
            {
                a[j] += temp;
                a[j + 1] -= temp;
                p += temp;
                for (int d = 0; d < temp; d++)
                {
                    v.push_back(j);
                }
                temp = b[j] - a[j];
                j++;
            }
            temp = b[i - 1] - a[i - 1];
            a[i - 1] += temp;
            a[i] -= temp;
            if (temp < 0)
            {
                temp *= (-1);
            }
            p += temp;
            for (int d = 0; d < temp; d++)
            {
                v.push_back(j);
            }
        }
        cout << p << endl;
        for (int i = 0; i < p; i++)
        {
            cout << v[i] << " " << v[i] + 1 << "\n";
        }
    }
    return 0;
}
