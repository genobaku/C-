#include <bits/stdc++.h>
using namespace std;

int main()
{

    int val1, val2, temp;

    cout << "Enter the first value: ";
    cin >> val1;
    cout << "Enter the second value: ";
    cin >> val2;

    // Logic
    temp = val1;

    val1 = val2;
    val2 = temp;

    cout << "The values are " << "val1 is " << val1 << " val2 is " << val2;

    return 0;
}