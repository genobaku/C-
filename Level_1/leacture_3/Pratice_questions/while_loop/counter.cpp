#include <bits/stdc++.h>
using namespace std;

int main() {
    int num;
    int digitcout = 0 ;
    cin >> num;
    while (num != 0){
        digitcout++;
        num = num/10;
    }
    cout << digitcout;
    return 0;
}