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
        int a[7];
        for (int i = 0; i < 7; i++)
        {
            cin >> a[i];
        }
        sort(a, a + 7);
        int x, y, z;
        x = a[0];
        y = a[1];
        z = a[6] - x - y;
        cout << x << " " << y << " " << z << endl;
    }
    return 0;
}
