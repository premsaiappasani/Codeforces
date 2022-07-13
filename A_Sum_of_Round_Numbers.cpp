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
        stack<pair<int, int>> s;
        int cnt = 0, c = -1;
        while (n > 0)
        {
            c++;
            if (n % 10 != 0)
            {
                s.push(make_pair(n % 10, c));
                cnt++;
            }
            n /= 10;
        }
        cout << cnt << endl;
        while (!s.empty())
        {
            cout << s.top().first;
            int temp = s.top().second;
            while (temp > 0)
            {
                cout << 0;
                temp--;
            }
            cout << " ";
            s.pop();
        }
        cout << endl;
    }
    return 0;
}
