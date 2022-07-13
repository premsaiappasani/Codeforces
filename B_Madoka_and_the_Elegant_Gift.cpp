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
        int n, m;
        cin >> n >> m;
        string s[n];
        for (int i = 0; i < n; i++)
        {
            cin >> s[i];
        }
        bool f = false;
        for (int i = 1; i < n; i++)
        {
            for (int j = 1; j < m; j++)
            {
                int a = (s[i - 1][j] - '0') + (s[i][j - 1] - '0') + (s[i - 1][j - 1] - '0') + (s[i][j] - '0');
                if (a == 3)
                {
                    f = true;
                    break;
                }
            }
            if (f)
            {
                break;
            }
        }
        if (f)
        {
            cout << "NO\n";
        }
        else
        {
            cout << "YES\n";
        }
    }
    return 0;
}
