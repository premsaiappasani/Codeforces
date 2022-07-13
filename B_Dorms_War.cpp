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
        ll k;
        cin >> k;
        unordered_set<char> sexyunorderedset;
        for (ll i = 0; i < k; i++)
        {
            char c;
            cin >> c;
            sexyunorderedset.insert(c);
        }
        bool b = false;
        ll l = 0, loveandlust = 0;
        for (ll i = 1; i < n; i++)
        {
            if ((i <= n - 1) && (sexyunorderedset.find(s[i]) != sexyunorderedset.end()))
            {
                ll x = i - l;
                loveandlust = max(loveandlust, x);
                l = i;
            }
        }
        cout << loveandlust << "\n";
    }
    return 0;
}
