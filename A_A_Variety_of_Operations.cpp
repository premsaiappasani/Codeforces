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
        int c, d;
        cin >> c >> d;
        int ass = abs(c - d);
        if (ass % 2)
        {
            cout << '-1' << endl;
            continue;
        }
        if (c == 0 && d == 0)
        {
            cout << '0' << endl;
            continue;
        }
        if (ass == 0)
        {
            cout << '1' << endl;
            continue;
        }
        cout << '2' << endl;
    }
    return 0;
}
