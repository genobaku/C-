#include <bits/stdc++.h>
using namespace std;

int main() {
    int digit;
    cout << "Enter the digit";
    cin >> digit;
    cout << ((digit % 5 == 0) ? "Divided by 5 " : "Not divied by 5");
    return 0;
}