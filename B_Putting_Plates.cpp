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
        ll h, w;
        cin >> h >> w;
        int a[h][w];
        for (int i = 0; i < h; i++)
        {
            for (int j = 0; j < w; j++)
            {
                a[i][j] = 0;
                if (i == 0 || i == h - 1)
                {
                    if (j % 2 == 0)
                    {
                        a[i][j] = 1;
                    }
                }
                else if ((i % 2 == 0) && (i + 1 != h - 1))
                {
                    if (j == 0 || j == w - 1)
                    {
                        a[i][j] = 1;
                    }
                }
                cout << a[i][j];
            }
            cout << "\n";
        }
        cout << "\n";
    }
    return 0;
}
