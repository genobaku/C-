#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int rev = 0;
    cin >> n;
    int copy = n;
    while (n > 0)
    {
        int total = n % 10;
        rev = rev * 10 + total;
        n = n / 10;
    }
    cout << ((copy == rev) ? "Palindrome" : "Not Palindrome");
    return 0;
}