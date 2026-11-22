#include <bits/stdc++.h>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    int guess = 0;
    srand(time(0));
    int random = rand() % 100 + 1;
    do
    {
        cout << "Enter the number b/w 1 to 100\n";
        cin >> guess;
        if (guess > random)
        {
            cout << "Too big\n";
        }
        else if (guess < random)
        {
            cout << "Too small\n";
        }
        else
        {
            cout << "congrulations";
        }
    } while (guess != random);

    return 0;
}