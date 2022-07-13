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
        int dp[26] = {0};
        string s;
        cin >> s;
        ll n = s.length();
        int x = 0;
        for (ll i = 0; i < n; i++)
        {
            x = s[i] - 'a';
            dp[x]++;
        }
        int cnt = 0, c = 0;
        for (int i = 0; i < 26; i++)
        {
            if (dp[i] >= 2)
            {
                cnt++;
            }
            else if (dp[i] == 1)
            {
                c++;
            }
        }
        c /= 2;
        cnt += c;
        cout << cnt << "\n";
    }
    return 0;
}
