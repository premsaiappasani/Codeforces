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
        int n = 0, k = 0;
        cin >> n >> k;
        set<pair<int, int>> s;
        pair<int, int> temp;
        int x;
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            temp.first = x;
            temp.second = i;
            s.insert(temp);
        }
        auto it = s.begin();
        auto it2 = it;
        it2++;
        int cnt = 1;
        for (int i = 0; i < n - 1; i++)
        {
            if (((*it).second + 1) != (*it2).second)
            {
                cnt++;
            }
            it++;
            it2++;
        }
        if (cnt <= k)
        {
            cout << "Yes\n";
        }
        else
        {
            cout << "No\n";
        }
        long long five = 1;
        cout << (~five) << endl;
        string str = "YOO";
        str[0] = 'm';
        cout << str << endl;
    }
    return 0;
}
