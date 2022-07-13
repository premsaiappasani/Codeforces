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
        char a[n][n];
        bool flag = true;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (i == j)
                {
                    a[i][i] = 'X';
                }
                else
                {
                    a[i][j] = '=';
                }
            }
        }
        int cnt = 0;
        int fst = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '2')
            {
                fst = i;
                break;
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '2')
            {
                cnt++;
            }
        }
        if (cnt == 2 || cnt == 1)
        {
            cout << "NO\n";
            continue;
        }
        if (cnt == 0)
        {
            cout << "YES\n";
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    cout << a[i][j];
                }
                cout << endl;
            }
            continue;
        }
        int temp = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '2')
            {
                temp = i;
                i++;
                while ((s[i] != '2') && (i < n))
                {
                    i++;
                }
                if (s[i] == '2')
                {
                    a[temp][i] = '+';
                    a[i][temp] = '-';
                }
                i--;
            }
        }
        a[temp][fst] = '+';
        a[fst][temp] = '-';
        cout << "YES\n";
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << a[i][j];
            }
            cout << endl;
        }
    }
    return 0;
}
