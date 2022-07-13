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
        if (n % 3 == 1)
        {
            int k = 1;
            while (n > 0)
            {
                if (k % 2 == 1)
                {
                    cout << 1;
                    n -= 1;
                }
                else
                {
                    cout << 2;
                    n -= 2;
                }
                k++;
            }
            cout << endl;
        }
        else
        {
            int k = 1;
            while (n > 0)
            {
                if (k % 2 == 0)
                {
                    cout << 1;
                    n -= 1;
                }
                else
                {
                    cout << 2;
                    n -= 2;
                }
                k++;
            }
            cout << endl;
        }
    }
    return 0;
}
