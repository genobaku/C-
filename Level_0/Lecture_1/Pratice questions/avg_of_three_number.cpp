// Take three numbers as input and print their average.

#include <bits/stdc++.h>
using namespace std;

int main()
{

    /*int num1;
    int num2;
    int num3;

    cout << "Enter the 1st number: ";
    cin >> num1;
    cout << "Enter the 2st number: ";
    cin >> num2;
    cout << "Enter the 3st number: ";
    cin >> num3;

    double sum = (num1 + num2 + num3) / 3;
    cout << " Your avg of " << num1 << "," << num2 << " and " << num3 << " is " << sum;*/

    int a, b, c, sum = 0, avg = 0;
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;

    sum = a + b + c;
    avg = (double)sum / 3;
    cout << "Avg : " << avg << "\n";

    return 0;
}