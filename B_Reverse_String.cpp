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
        string s1 = "", s2 = "";
        cin >> s1;
        cin >> s2;
        int l = s1.length();
        int r = s2.length();
        int x = 0;
        for (int i = 0; i < l; i++)
        {
            if (s2[0] == s1[i])
            {
                x = i;
                break;
            }
        }
        bool flag = true;
        for (int i = 0; i < r; i++)
        {
            if (s2[i] == s1[x])
            {
                x++;
                continue;
            }
            else
            {
                x -= 2;
                if (x < 0)
                {
                    flag = false;
                    break;
                }
                for (int j = i; j < r; j++)
                {
                    if (s2[j] == s1[x])
                    {
                        x--;
                        continue;
                    }
                    else
                    {
                        flag = false;
                        cout << s2[j] << s1[x] << endl;
                        break;
                    }
                }
            }
        }
        if (flag)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
