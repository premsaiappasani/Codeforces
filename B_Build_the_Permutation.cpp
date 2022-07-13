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
        int n, a, b;
        cin >> n >> a >> b;
        int arr[n];
        if ((abs(a - b) > 1) || (a + b > n - 2))
        {
            cout << -1 << endl;
            continue;
        }
        if (a < b)
        {
            for (int i = 0; i < n; i++)
            {
                arr[i] = i + 1;
            }
            int j = 0;
            for (int i = 0; i < b; i++)
            {
                swap(arr[j], arr[j + 1]);
                j += 2;
            }
        }
        else if (a > b)
        {
            for (int i = 0; i < n; i++)
            {
                arr[i] = n - i;
            }
            int j = 0;
            for (int i = 0; i < a; i++)
            {
                swap(arr[j], arr[j + 1]);
                j += 2;
            }
        }
        else
        {
            for (int i = 0; i < n; i++)
            {
                arr[i] = i + 1;
            }
            int j = 1;
            for (int i = 0; i < a; i++)
            {
                swap(arr[j], arr[j + 1]);
                j += 2;
            }
        }
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
