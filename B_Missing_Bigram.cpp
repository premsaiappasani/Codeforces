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
        string a[n - 2];
        cin >> a[0];
        cout << a[0][0];
        bool f = false;
        for (int i = 1; i < n - 2; i++)
        {
            cin >> a[i];
            if (a[i - 1][1] != a[i][0])
            {
                f = true;
                cout << a[i - 1][1];
            }

            cout << a[i][0];
        }
        cout << a[n - 3][1];
        if (f)
        {
            cout << endl;
            continue;
        }
        cout << 'a' << endl;
    }
    return 0;
}
