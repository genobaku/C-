#include <bits/stdc++.h>
using namespace std;

int main()
{
    int age = 5;
    // if (age >= 18){
    //     cout << "Valid voter";
    // } else {
    //     "invaild voter";
    // }

    // ternary operator
    // Way 1
    (age >= 18) ? cout << "Vaild" : cout << "Invaild";

    // way 2
    cout << ((age >= 18) ? "Vaild" : "invaild");

    return 0;
}