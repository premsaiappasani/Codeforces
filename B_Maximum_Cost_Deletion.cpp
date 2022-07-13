#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr)
int mini(string s)
{
    int n = s.length();
    int x = 0, a = INT_MIN, b = INT_MAX, c1 = 0, c2 = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '0')
        {
            a = 0;
        }
        else
        {
            a = 1;
        }
        if (a != b)
        {
            if (a)
            {
                c2++;
            }
            else
            {
                c1++;
            }
        }
        b = a;
    }
    x = min(c1, c2);
    x++;
    return x;
}
int main()
{
    fast;
    int t;
    cin >> t;
    while (t--)
    {
        int n, a, b;
        cin >> n >> a >> b;
        string s = "";
        cin >> s;
        int x = 0;
        if (    b >= 0)
        {
            x = b * n + a * n;
            cout << x << "\n";
            continue;
        }
        int ct = 0;
        ct = mini(s);
        x = a * n;
        x += b * ct;
        cout << x << endl;
    }
    return 0;
}
