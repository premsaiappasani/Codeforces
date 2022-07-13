#include <bits/stdc++.h>
using namespace std;

void medi(vector<int> &a, vector<int> &ref, int leafNode, vector<bool> &vistd)
{
    long long i = leafNode;
    while (a[i] != i)
    {
        if (vistd[i])
        {
            return;
        }
        else
        {
            ref.push_back(i);
            vistd[i] = 1;
            i = a[i];
        }
    }
    if (!vistd[i])
    {
        vistd[i] = 1;
        ref.push_back(i);
    }
    return;
}
void solve()
{
    int n;
    cin >> n;
    vector<int> a(n + 1, 0);
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    if (n == 1)
    {
        cout << 1 << "\n";
        cout << 1 << "\n";
        cout << 1 << "\n";
        return;
    }
    vector<bool> lffff(n + 1, 0);
    vector<bool> vistd(n + 1, 0);
    vector<vector<int>> result;
    for (int i = 1; i <= n; i++)
    {
        lffff[a[i]] = 1;
    }
    for (int i = n; i >= 1; i--)
    {
        if (lffff[i])
        {
            continue;
        }
        else
        {
            vector<int> ref;
            medi(a, ref, i, vistd);
            result.push_back(ref);
        }
    }
    cout << result.size() << "\n";
    for (auto an : result)
    {
        int l = an.size();
        cout << l << "\n";
        int i = l - 1;
        while (i >= 0)
        {
            cout << an[i] << " ";
            i--;
        }
        cout << "\n";
    }
    cout << "\n";
}

int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        solve();
    }
    return 0;
}