#include<iostream>
using namespace std;

int main()
{
    int nights = 1001;
    int * pt = new int;
    *pt =  nights;

    cout << "nights value = ";
    cout << nights << ": location " << &nights << endl;
    cout << "int ";
    cout << "value = " << *pt << ": location = " << pt << endl;
    double *pd = new double;
    *pd = 10000001.0;
    cout << "double ";
    cout << "value = " << *pd << ": location = " << pd << endl;
    cout << "size of pt = " << sizeof(pt);
    delete pd, pt;

    return 0;
}