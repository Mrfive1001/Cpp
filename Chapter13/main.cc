#include <iostream>
#include "example.h"

using namespace std;
using namespace example;


int main()
{
    Derived d1  = {1,2, 10.0};
    d1.Print();
    int b = 10;
    int *c = &b;
    float * d = new float;
    *d = b;
    cout << c << " " << d << endl;
    cout << a;
    delete d;
    return 0;
}


/*

*/