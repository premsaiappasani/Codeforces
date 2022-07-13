#include <bits/stdc++.h>
using namespace std;
int ch(char c)
{
    int asc = c - 'a';
    asc++;
    return asc;
}
int main()
{
    int n, q;
    cin >> n >> q;
    string s = "";
    cin >> s;
    int a[n] = {0};
    for (int i = 0; i < n; i++)
    {
        a[i] = ch(s[i]);
    }
    for (int i = 1; i < n; i++)
    {
        a[i] = a[i] + a[i - 1];
    }
    while (q--)
    {
        int sum = 0;
        int l, r;
        cin >> l >> r;
        if (l < 2)
        {
            sum = a[r - 1];
        }
        else
        {
            sum = (a[r - 1] - a[l - 2]);
        }
        cout << sum << endl;
    }
    return 0;
}