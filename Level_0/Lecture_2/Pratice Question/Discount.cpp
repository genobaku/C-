#include <bits/stdc++.h>
using namespace std;

int main()
{
    /*int price;
    cout << "Enter the price ";
    cin >> price;
    if (price > 9000){
        cout << "Your discount is 20 % and your amount is " << price - (20*price/100) ;
    }else if (price >= 7001 && price <= 9000) {
        cout << "Your discount is 10% and your amout is " << price - (10*price/100);
    }else if (price >= 5001 && price <= 7000){
        cout << "Your discount is 5% and your amount is " << price - (5*price/1000);
    }else {
        cout << "Your amount is " << price;
    }*/

    int amt;
    double dis = 0, amount = 0;
    cout << "Enter the amount: ";
    cin >> amt;
    if (amt >= 0 && amt <= 5000)
    {
        dis = 0;
    }
    else if (amt > 5000 && amt <= 7000)
    {
        dis = 0.05;
    }
    else if (amt > 7000 && amt <= 9000)
    {
        dis = 0.1;
    }
    else if (amt > 9000)
    {
        dis = 0.2;
    }
    amount = (amt - (amt * dis));
    cout << "Your Discounted amount is " << amount;
    return 0;
}
