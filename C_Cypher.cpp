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
        vector<int> arr(n);
        vector<string> s(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < n; i++)
        {
            int n;
            cin >> n;
            cin >> s[i];
            for (auto c : s[i])
            {
                if (c == 'D')
                {
                    arr[i]++;
                    if (arr[i] == 10)
                        arr[i] = 0;
                }
                else
                {
                    arr[i]--;
                    if (arr[i] < 0)
                        arr[i] = 9;
                }
            }
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
