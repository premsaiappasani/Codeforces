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
        int a, b;
        cin >> a >> b;

        int mamypocopants = 0;
        a--;
        if (a % 4 == 0)
        {
            mamypocopants = a;
        }
        else if (a % 4 == 1)
        {
            mamypocopants = 1;
        }
        else if (a % 4 == 2)
        {
            mamypocopants = (a + 1);
        }
        else
        {
            mamypocopants = 0;
        }
        a++;
        if (mamypocopants == b)
        {
            cout << a << endl;
            continue;
        }
        mamypocopants = mamypocopants ^ b;
        if (mamypocopants == a)
        {
            cout << a + 2 << endl;
            continue;
        }
        cout << a + 1 << endl;
    }
    return 0;
}
