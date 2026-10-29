#include <bits/stdc++.h>
using namespace std;

int main()
{
    char chara;
    cout << "Give me the character to check whether it's a vowel or consonant: ";
    cin >> chara;

    char lower_chara = tolower(chara);

    if (!isalpha(chara))
    {
        cout << "Invalid input";
    }
    else
    {
        switch (lower_chara)
        {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            cout << "Vowel";
            break;
        default:
            cout << "Consonant";
            break;
        }
    }
    return 0;
}
