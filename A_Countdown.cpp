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
        ll a = 0;
        for (int i = 0; i < n - 1; i++)
        {
            if (s[i] == '0')
            {
                continue;
            }
            else
            {
                int temp = s[i] - '0';
                a++;
                a += temp;
            }
        }
        a += (s[n - 1] - '0');
        cout << a << endl;
    }
    return 0;
}
