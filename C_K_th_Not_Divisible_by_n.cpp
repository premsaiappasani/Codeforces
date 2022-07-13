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
        int n, k;
        cin >> n >> k;
        int q = 0, r = 1;
        q = k / (n - 1);
        r = k % (n - 1);
        q *= n;
        q += r;
        if (r == 0)
        {
            q--;
        }
        cout << q << endl;
    }
    return 0;
}
