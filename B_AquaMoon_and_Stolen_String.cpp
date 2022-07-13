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
        int n, m;
        cin >> n >> m;
        string s[n];
        string str = "", temp = "";
        int a[m] = {0}, b = 0, c[m] = {0};
        for (int i = 0; i < n; i++)
        {
            cin >> s[i];
        }
        string s2[n - 1];
        for (int i = 0; i < n - 1; i++)
        {
            cin >> s2[i];
        }
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                temp = s[j];
                b = temp[i] - 'a';
                a[i] += b;
            }
        }
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n - 1; j++)
            {
                temp = s2[j];
                b = temp[i] - 'a';
                c[i] += b;
            }
        }
        temp = "";
        for (int i = 0; i < m; i++)
        {
            b = a[i] - c[i];
            temp = 'a' + b;
            str += temp;
        }
        cout << str << "\n";
    }
    return 0;
}
