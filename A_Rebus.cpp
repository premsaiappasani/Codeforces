#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr)
int main()
{
    fast;
    int t;
    t = 1;
    while (t--)
    {
        int a = 0, b = 0;
        int n, x;
        char c;
        vector<char> v;
        while (true)
        {
            cin >> c;
            if (c == '=')
            {
                cin >> n;
                break;
            }
            else if (c == '+')
            {
                a++;
            }
            else if (c == '-')
            {
                b++;
            }
            v.push_back(c);
        }
        int l=v.size();
        a++;
        int max = (a * n) - b;
        int min = a - (b * n);
        if ((max < n || min > n))
        {
            cout << "Impossible\n";
        }
        else
        {
            cout << "Possible\n";
            
        }
    }
    return 0;
}
