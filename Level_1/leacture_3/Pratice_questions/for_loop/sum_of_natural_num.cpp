#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter is total number you wanna add: ";
    cin >> n;
    int sum = 0;
    for (int i = 0; i <= n; i++)
    {
        sum += i; //sum = sum + i
    }
    cout << "The total sum is " << sum;
    return 0;
}