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
        int max = INT_MIN;
        double sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (max < a[i])
            {
                max = a[i];
            }
            sum += a[i];
        }
        sum -= max;
        double f = sum / (n - 1);
        f += max;
        cout << fixed << setprecision(9) << f << endl;
    }
    return 0;
}
