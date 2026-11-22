#include <bits/stdc++.h>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    int guess = 0;
    srand(time(0));
    int random = rand() % 10 + 1;
    do
    {
        cout << "Enter a digit b/w 1 to 10\n";
        cin >> guess;
        if (guess > random)
        {
            cout << "too high\n";
        }
        else if (guess < random)
        {
            cout << "Too low\n";
        }
        else
        {
            cout << "Congrulations !!\n";
        }
    } while (guess != random);

    return 0;
}