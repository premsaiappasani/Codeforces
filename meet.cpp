#include <iostream>
#include <string>
using namespace std;

int main()
{
    float m;
    cin >> m;
    float sum = 0;
    int i;
    cin >> i;
    while (i)
    {
        sum += m;
        sum *= 1.12;
        i--;
    }
    cout << sum;
}