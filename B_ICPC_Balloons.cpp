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
        string s;
        cin >> s;
        int ans = 0;
        unordered_map<char, int> m;
        for (char c : s)
        {
            if (!m[c])
            {
                m[c]++;
                ans++;
            }
            ans++;
        }
        cout << ans << endl;
    }
    return 0;
}
