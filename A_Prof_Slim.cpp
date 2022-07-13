#include <bits/stdc++.h>
using namespace std;

bool solve()
{
    long long n;
    cin >> n;
    long long s[n];
    for (long long i = 0; i < n; i++)
    {
        cin >> s[i];
    }
    long long i = 0, j = n - 1;
    while (i < j)
    {
        if (s[i] > 0 and s[j] < 0)
        {
            s[i] *= (-1);
            s[j] *= (-1);
            i++, j--;
        }
        else if (s[i] < 0)
            i++;
        else if (s[j] > 0)
            j--;
    }
    for (long long i = 1; i < n; i++)
    {
        if (s[i] < s[i - 1])
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int tst;
    cin >> tst;
    while (tst--)
    {
        if (solve())
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}