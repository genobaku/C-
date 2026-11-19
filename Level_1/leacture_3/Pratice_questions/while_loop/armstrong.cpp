#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main()
{
    int n;
    int digitcout = 0;
    cin >> n;
    int copy = n;
    int sum = 0;

    while (n > 0)
    {
        digitcout++;
        n = n / 10;
    }

    n = copy;

    while (n > 0)
    {
        int total = n % 10;
        sum += (int)round(pow(total, digitcout));
        n = n / 10;
    }
    cout << ((copy == sum) ? "Armstrong" : "Not Armstrong");
    return 0;
}