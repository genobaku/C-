/* Take name and age of user as input and Print
Example 1 :

Input = name = " Harsh",age = 24
Output = Hello Harsh, you are 24 year old.*/

#include <bits/stdc++.h>
#include <string>
using namespace std;

int main()
{
    string name;
    int age;

    cout << " Enter you age: ";
    cin >> age;
    cout << "Enter your name: ";
    cin.ignore();
    getline(cin, name);
    cout << "Hello " << name << " you are " << age << " years old";
    return 0;
}