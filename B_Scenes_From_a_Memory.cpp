#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr)

bool isPrime(int n)
{
    // Corner case
    if (n <= 1)
        return false;

    // Check from 2 to n-1
    for (int i = 2; i < n; i++)
        if (n % i == 0)
            return false;

    return true;
}

int main()
{
    fast;
    int t;
    cin >> t;
    int crazyidea[10] = {0};
    crazyidea[1] = 1;
    crazyidea[4] = 1;
    crazyidea[6] = 1;
    crazyidea[8] = 1;
    crazyidea[9] = 1;
    int v[10][10];
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            v[i][j] = 0;
        }
    }
    for (int i = 22; i < 98; i++)
    {
        if (!isPrime(i))
        {
            int a = i / 10;
            int b = i % 10;
            v[a][b] = 1;
        }
    }
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        bool flag = false;
        for (int i = 0; i < n; i++)
        {
            int c = s[i] - '0';
            if (crazyidea[c] == 1)
            {
                cout << 1 << endl;
                cout << s[i] << endl;
                flag = true;
                break;
            }
        }
        if (flag)
        {
            continue;
        }
        for (int i = 0; i < n; i++)
        {
            int c = s[i] - '0';
            for (int j = i + 1; j < n; j++)
            {
                int a = s[j] - '0';
                if (v[c][a] == 1)
                {
                    cout << 2 << endl;
                    cout << c << a << endl;
                    i = n;
                    j = n;
                    break;
                }
            }
        }
    }
    return 0;
}
