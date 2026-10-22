#include <bits/stdc++.h>
using namespace std;

int main() {
    char a;
    cout << "Enter a character" << "\n";
    cin >> a;
    if (!isalpha(a)){
        cout << "Invaild";
    }
    else {
        switch (a) {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
            case 'A':
            case 'E':
            case 'I':
            case 'O':
            case 'U':
                cout << "Vowel";
                break;
            default:
            cout << "Consonenet";
        }
    }
    
    return 0;
}