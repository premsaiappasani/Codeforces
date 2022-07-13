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
        int x, y;
        cin >> x >> y;
        if (y % x != 0)
        {
            cout << "0 0\n";
            continue;
        }
        int n = y / x;
        cout << "1 " << n << endl;
    }
    return 0;
}
