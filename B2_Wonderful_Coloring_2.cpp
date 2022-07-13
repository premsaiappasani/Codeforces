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
        int a[n];
        int dp[n] = {0};
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            a[i]--;
            dp[a[i]]++;
        }
        int x = 0;
        int cnt = 0, c = 1;
        int op[n] = {0};

        for (int i = 0; i < n; i++)
        {
            if (dp[a[i]] >= k)
            {
                if (op[a[i]] <= k)
                {
                    op[a[i]]++;
                    v.push_back(op[a[i]]);
                }
                else
                {
                    v.push_back(0);
                }
            }
            else
            {
                cnt++;
                v.push_back(-1);
            }
        }
        x = cnt / k;
        for (int i = 0; i < n; i++)
        {
            if (v[i] == -1)
            {
                for (int j = i; j < n; j++)
                {
                    if (a[j] == a[i])
                    {
                        if (x == 0)
                        {
                            v[j] = 0;
                            continue;
                        }
                        if (c > k)
                        {
                            c = 1;
                        }
                        v.push_back(c);
                        c++;
                        x--;
                    }
                }
            }
        }
        for (int i = 0; i < n; i++)
        {
            cout << v[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
