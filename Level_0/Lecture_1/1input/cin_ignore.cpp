#include <bits/stdc++.h>
#include <string>
using namespace std;

int main()
{

    int age;
    string name;

    /* cout << "Enter your age";
    cin >> age;

    cout << "enter your name";
    getline(cin, name); 
    
// output: enter your name
//Welcome your name is and your age is 12                

//Means that the getline() function is not working properly after using cin >> age. This is because the newline character left in the input buffer by cin >> age is being read by getline() as an empty line. To fix this, you can use cin.ignore() to ignore the newline character before calling getline(). */

    cout << "Enter your age: ";
    cin >> age;
    cin.ignore(); // Ignore the newline character left in the input buffer
    cout << "enter your name";
    getline(cin, name); // Now getline() will work properly

    cout << "Welcome your name is " << name << " and your age is " << age;

    return 0;
}

