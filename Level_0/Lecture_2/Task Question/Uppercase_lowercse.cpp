// Take a character as input and check wheater it is uppercase or lowercase.

// type 1
// #include <bits/stdc++.h>
// #include <cctype>
// using namespace std;

// int main()
// {
//     char a;
//     cout << "enter a character to find is it uppercase or lowercase:";
//     cin >> a;
//     if (!isalpha(a))
//     {
//         cout << "Invaild";
//     }
//     else
//     {
//         switch (a)
//         {
//         case 'a':
//         case 'b':
//         case 'c':
//         case 'd':
//         case 'e':
//         case 'f':
//         case 'g':
//         case 'h':
//         case 'i':
//         case 'j':
//         case 'k':
//         case 'l':
//         case 'm':
//         case 'n':
//         case 'o':
//         case 'p':
//         case 'q':
//         case 'r':
//         case 's':
//         case 't':
//         case 'u':
//         case 'v':
//         case 'w':
//         case 'x':
//         case 'y':
//         case 'z':
//             cout << "Lowercase";
//             break;
//         default:
//             cout << "Uppercase";
//         }
//     }
//     return 0;
// }

// type 2

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     char a;
//     cout << "Enter a char: ";
//     if (!(cin >> a))
//     {
//         cout << "Invalid input";
//         return 0;
//     }

//     if (!isalpha(a))
//     {
//         cout << "Invalid";
//     }
//     else if (islower(a))
//     {
//         cout << "Lowercase";
//     }
//     else
//     {
//         cout << "uppercase";
//     }
//     return 0;
// }

// but here still a problem if user enter aAas still lowercase

// type 3 perfect one

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string input;
    cout << "Enter a char: ";

    if (!(cin >> input))
    {
        cout << "Invalid input";
        return 0;
    }

    // Check if the user entered more than one character
    if (input.length() != 1)
    {
        cout << "Invalid (Please enter exactly one character)";
    }
    else
    {
        char a = input[0]; // Extract the single character

        if (islower(a))
        {
            cout << "Lowercase";
        }
        else if (isupper(a))
        {
            cout << "Uppercase";
        }
        else
        {
            cout << "Invalid";
        }
    }
    return 0;
}