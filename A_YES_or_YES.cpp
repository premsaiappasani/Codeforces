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
        string s;
        cin >> s;
        string arr[8] = {"YES", "YEs", "YeS", "yES", "Yes", "yEs", "yeS", "yes"};
        bool f = true;
        for (int i = 0; i < 8; i++)
        {
            if (arr[i] == s)
            {
                cout << "YES\n";
                f = false;
                break;
            }
        }
        if (f)
            cout << "NO\n";
    }
    return 0;
}
