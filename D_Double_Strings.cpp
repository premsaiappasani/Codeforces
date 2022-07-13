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
        string s[n];
        for (int i = 0; i < n; i++)
        {
            cin >> s[i];
        }
        sort(s, s + n);
        string res = "";
        for (int i = 0; i < n; i++)
        {
            s += "0";
        }
        for (int i = 0; i < n; i++)
        {
            vector<string> temp;
            int j = i;
            while (j < n && s[j].find(s[i]) != string::npos)
            {
                temp.push_back(s[j]);
                j++;
            }
            for (auto str : temp)
            {
                size_t f = str.find(s[i]);
                if (binary_search(s.begin(), s.end(), s[i].substr(f)))
                {
                    res[i] = '1';
                }
            }
        }

        cout << res << endl;
    }
    return 0;
}
