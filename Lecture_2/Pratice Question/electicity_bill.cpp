#include <bits/stdc++.h>
using namespace std;

int main()
{
    int unit;
    cout << "Enter your unit: ";
    cin >> unit;
    if (unit > 400)
    {
        cout << "Your bill is " << unit * 13 << " rupees.";
    }
    else if (unit > 200 && unit <= 400)
    {
        cout << "Your bill is " << unit * 8 << " rupees.";
    }
    else if (unit > 100 && unit <= 200)
    {
        cout << "Your bill is " << unit * 6 << " rupees.";
    }
    else
    {
        cout << "Your bill is " << unit * 4.2 << "rupees.";
    }

    return 0;
}