#include <bits/stdc++.h>
using namespace std;
#define FIO                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define pi acos(-1.0)
#define ll long long
#define ull unsigned ll
#define EPS 1e-12
#define MV 1e18
#define MX 10000008
#define mx 2000056
#define all(v) v.begin(), v.end()
#define vii vector<int>
#define vll vector<ll>
#define pii pair<int, int>
#define pll pair<ll, ll>
#define pip pair<int, pii>
#define pul pair<ull, ull>
#define mii map<int, int>
#define mll map<ll, ll>
#define qii queue<int>
#define dii deque<int>
#define vip vector<pair<int, int>>
#define pb push_back
#define mp make_pair
const int INF = INT_MAX;
int fx[] = {+1, -1, +0, +0};
int fy[] = {+0, +0, +1, -1};

// freopen("data.txt", "r", stdin);
// freopen("dataOut.txt", "w", stdout);
///cout<<"Case "<<z++<<": "<<__<<endl;

typedef bool (*comp)(pii, pii);
int arr[mx];
string s;
int fuckk(ll a, char find)
{
    int ans = 0, now = 0;
    for (int i = 0; i < a; i++)
    {
        if (s[i] == find)
        {
            ans += abs(i - now);
            now += 2;
        }
    }
    return ans;
}
void solve()
{
    ll a;
    cin >> a;
    vll v;
    int even = 0, odd = 0;

    for (int i = 0; i < a; i++)
    {
        int k;
        cin >> k;
        v.pb(k);
        if (k % 2)
        {
            odd++;
            s += '1';
        }
        else
        {
            even++;
            s += '0';
        }
    }
    if (abs(even - odd) > 1)
    {
        cout << -1 << endl;
    }
    else
    {
        if (odd > even)
        {
            cout << fuckk(a, '1') << endl;
        }
        else if (even > odd)
        {
            cout << fuckk(a, '0') << endl;
        }
        else
        {
            int first = fuckk(a, '1');
            int last = fuckk(a, '0');
            cout << min(first, last) << endl;
        }
    }
    s.clear();
}
int main()
{
    int x;
    cin >> x;
    while (x--)
    {
        solve();
    }
}