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
        string a = "";
        string b = "";
        cin >> b;
        cin >> a;
        int c = 0;
        if (a[0] == '1')
        {
            if (b[0] == '0')
            {
                c++;
            }
            else
            {
                if (b[1] == '1')
                {
                    c++;
                    b.replace(1, 1, "2");
                }
            }
        }
        for (int i = 1; i < n; i++)
        {
            if (a[i] == '1')
            {
                if (b[i - 1] == '1')
                {
                    c++;
                }
                else if (b[i] == '0')
                {
                    c++;
                }
                else if (i != n - 1)
                {
                    if (b[i + 1] == '1')
                    {
                        c++;
                        b.replace(i + 1, 1, "2");
                    }
                }
            }
        }
        cout << c << endl;
    }
    return 0;
}
