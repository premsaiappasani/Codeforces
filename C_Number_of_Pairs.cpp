#include <bits/stdc++.h>
using namespace std;

int bin_search(vector<int> &arr, int x, int n)
{
    int l = 0, r = n, mid;
    while (l <= r)
    {
        mid = (l + r) / 2;

        if (x == arr[mid])
        {
            break;
        }
        else if (x < arr[mid])
        {
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }

    return mid;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tes;
    cin >> tes;
    while (tes--)
    {
        int n, l, r;
        cin >> n >> l >> r;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        sort(arr.begin(), arr.end());

        if (arr[n - 1] + arr[n - 2] < l)
            cout << "0\n";
        else
        {

            long long res = 0;
            for (int i = 0; i < n - 1; i++)
            {
                if (arr[i] < r)
                {
                    int x = r - arr[i];
                    int r_ind = bin_search(arr, x, n - 1);
                    if (r_ind >= n)
                        r_ind = n - 1;
                    while (r_ind < n - 1 && arr[r_ind + 1] <= x)
                        r_ind++;
                    while (arr[r_ind] > x)
                        r_ind--;
                    if (r_ind < i)
                        break;

                    int l_ind = i + 1;
                    if (arr[i] < l)
                    {
                        x = l - arr[i];
                        if (x >= arr[i])
                        {
                            l_ind = bin_search(arr, x, n - 1);
                            if (l_ind <= i)
                                l_ind = i + 1;
                            while (l_ind > i + 1 && arr[l_ind - 1] == arr[l_ind])
                                l_ind--;
                            while (arr[l_ind] < x)
                                l_ind++;
                        }
                    }

                    if (r_ind >= l_ind)
                        res += r_ind - l_ind + 1;
                }
                else
                    break;
            }
            cout << res << endl;
        }
    }
    return 0;
}