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
        int n, p = 0, l;
        cin >> n;
        int a, c = 0;
        cin >> a;
        for (int i = 2; i < n; i++)
        {
            cin >> a;
            if (a == 0 && p == 0)
            {
                p = i;
                l = i;
            }
            else if (a == 0)
            {
                l = i;
            }
        }
        cin >> a;
        if (p)
            cout << l - p + 2 << endl;
        else
            cout << 0 << endl;
    }
    return 0;
}
