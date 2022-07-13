#include <bits/stdc++.h>
#include <cstdio>
using namespace std;

int GCD(int a, int b)
{
    return (!a ? b : GCD(b, a % b));
}

int cnt(int a)
{
    int tmp = a;
    int cnt = 0;
    for (int i = 2; i * i <= a; i++)
    {
        while (tmp % i == 0)
            tmp /= i, cnt++;
    }
    if (tmp != 1)
        cnt++;
    return cnt;
}

int least(int a, int b)
{
    int ret = 0;
    int gcd = __gcd(a, b);
    ret += ((a != gcd) + (b != gcd));
    return ret;
}
int most(int a, int b)
{
    return cnt(a) + cnt(b);
}

int main()
{
    int tests;
    scanf("%d", &tests);
    while (tests--)
    {
        int a, b, K;
        scanf("%d%d%d", &a, &b, &K);
        int stp1 = least(a, b), stp2 = most(a, b);
        if (K >= stp1 && K <= stp2 && (a != b || K != 1))
            puts("YES");
        else
            puts("NO");
    }
    return 0;
}