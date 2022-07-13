#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr)
int main()
{
    fast;
    int n, k;
    cin >> n >> k;
    k = 240 - k;
    if (k == 0)
    {
        cout << 0 << endl;
        return 0;
    }
    int sum = 0;
    for (int i = 1; i < (n + 1); i++)
    {
        sum += (5 * i);
        if (sum > k)
        {
            cout << i - 1 << endl;
            return 0;
        }
    }
    cout << n << endl;
    return 0;
}
