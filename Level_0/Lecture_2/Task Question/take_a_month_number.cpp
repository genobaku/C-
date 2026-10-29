// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int number;
//     cout << "Enter the months b/w 1-12: ";
//     cin >> number;
//     switch (number)
//     {
//     case 1:
//     case 2:
//     case 12:
//         cout << "Winter";
//         break;
//     case 3:
//     case 4:
//     case 5:
//         cout << "Monsoon";
//         break;
//     case 6:
//     case 7:
//     case 8:
//         cout << "Summer";
//         break;
//     default:
//         cout << "Autumn";
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main() {
    string input;
    cout << "Enter the the month b/w 1-12 to find the season: ";
    if (!(cin >> input)){
        return 0;
    }
    if (input.empty() ||
        !all_of(input.begin(), input.end(), ::isdigit)){
            cout << "Invaild";
            return 0;
        }
    int month = stoi(input);
    if (month < 1 || month > 12){
        cout << "Invaild month number";
        return 0;
    }

    switch (month){
        case 1:
        case 2:
        case 12:
        cout << "Winter";
        break;
        case 3:
        case 4:
        case 5:
        cout << "Monsoon";
        break;
        case 6:
        case 7:
        case 8:
        cout << "Summer";
        break;
        case 9:
        case 10:
        case 11:
        cout << "Autumn";
        break;
    }
    return 0;
}