#include <bits/stdc++.h>
using namespace std;

int main()
{
    int input;
    int last;
    int sum = 0;
    cout << "Enter the numnber: ";
    cin >> input;
    while (input > 0)
    {
        last = input % 10;
        sum = sum + last;
        input = input / 10;
    }
    cout << sum;
    return 0;
}