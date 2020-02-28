#include<iostream>
#include"brass.h"
using namespace std;

typedef ios_base::fmtflags format;
typedef streamsize precis;
format setFormat();
void restore(format f, precis p);

Brass::Brass(const string&s, long n, double b):fullName(s), acctNum(n), balance(b){}

void Brass::Deposit(double amt)
{
    if (amt < 0)
        cout << "Negative deposit not allowed; \n";
    else
        balance += amt;
}

void Brass::Withdraw(double amt)
{
    format initialState = setFormat();
    precis prec = cout.precision(2);
    if (amt < 0)
        cout << "Negative withdraw not allowed; \n";
    else if (amt <= balance)
        balance -= amt;
    else
        cout << "Exceeds.\n";
    restore(initialState, prec);
}

double Brass::Balance() const {return balance;}

void Brass::ViewAcct() const
{
    format initialState = setFormat();
    precis prec = cout.precision(2);
    cout << "Client: " << fullName << endl;
    cout << "Account Number: " << acctNum << endl;
    cout << "Balance: " << balance << endl;
    restore(initialState, prec);
}

BrassPlus::BrassPlus(const string&s, long n, double b, 
                    double m, double r):Brass(s, n, b), maxLoan(m), rate(r)
{
    owesBank = 0.0;
}

BrassPlus::BrassPlus(const Brass & b, double m, double r):Brass(b), maxLoan(m), rate(r)
{
    owesBank = 0.0;
}


void BrassPlus::ViewAcct() const
{
    format initialState = setFormat();
    precis prec = cout.precision(2);

    Brass::ViewAcct();
    cout <<"Maximum loan: " << maxLoan << endl;
    cout << "Owed to bank: " << owesBank << endl;
    cout.precision(3);
    cout << "Load Rate: " << 100* rate << "%" << endl;
    restore(initialState, prec);
}

void BrassPlus::Withdraw(double amt)
{
    format initialState = setFormat();
    precis prec = cout.precision(2);
    
    double bal = Balance();
    if (amt <= bal)
        Brass::Withdraw(amt);
    else if (amt <= bal + maxLoan - owesBank)
    {
        double advance = amt - bal;
        owesBank += advance * (1 + rate);
        cout << "Bank advance: " << advance << endl;
        cout << "Finance charge: " << advance*rate << endl;
        Deposit(advance);
        Brass::Withdraw(amt);
    }
    else
        cout << "Credit limit exceeded.";
    restore(initialState, prec);
}

format setFormat()
{
    return cout.setf(ios_base::fixed, ios_base::floatfield);
}

void restore(format f, precis p)
{
    cout.setf(ios_base::fixed, ios_base::floatfield);
    cout.precision(p);
}