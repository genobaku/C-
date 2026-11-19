#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int rev = 0;
    cin >> n;
    while (n > 0)
    {
        int value = n % 10;
        rev = rev * 10 + value; // first 0 + 5 , seocnd 50 + 2 , thrid 520 + 1; that is how reverse happening;
        n = n / 10;
    }
    cout << "reverse value = " << rev;
    return 0;
}