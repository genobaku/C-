// question : If number 125 to
// Output
//  1
//  2
//  5

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int last;
    cout << "Enter the digit: ";
    cin >> n;
    while (n > 0)
    {
        last = n % 10; // if number 125 then 5
        cout << last << "\n";
        n = n / 10; // 125 then 12
    }

    return 0;
}