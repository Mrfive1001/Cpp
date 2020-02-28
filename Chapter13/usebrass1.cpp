#include<iostream>
#include"brass.h"

using namespace std;
int main()
{
    Brass Piggy("Porcelot Pigg", 381299, 4000.00);
    BrassPlus Hoggy("Horatio Hogg", 382288, 3000.00);
    Piggy.ViewAcct();
    cout << endl;
    Hoggy.ViewAcct();
    cout << endl;
    Hoggy.Deposit(1000.0);
    cout << "New value: " << Hoggy.Balance() << endl;
    cout << "Withdrawing 4200 from pigg Account.\n";
    Piggy.Withdraw(4200.00);
    cout << "New value: "<< Piggy.Balance() << endl;
    Hoggy.Withdraw(4200.00);
    Hoggy.ViewAcct();
}