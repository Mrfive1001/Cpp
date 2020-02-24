#include<iostream>
#include<cstdlib>
#include<ctime>
#include"vector.h"

using namespace std;
using VECTOR::Vector;

int main()
{
    srand(time(0));
    double direction;
    Vector step;
    Vector result;
    int steps =  0;
    double target, dstep;
    cout << "Enter target distance (q to quit): ";
    while (cin >> target)
    {
        cout <<  "Enter step length: ";
        if (! (cin >> dstep))
        {
            break;
        }
        while (result.magval() < target)
        {
            direction = rand() % 360;
            step.reset(dstep, direction, Vector::POL);
            result =  result + step;
            steps += 1;
        }
        cout << "After " << steps << " steps, the subject has the folling location:\n";
        cout << result << endl;
        result.polar_mode();
        cout << " or\n" << result << endl;
        cout << "Average outward distance per step = ";
        cout << result.magval()/steps << endl;
        steps = 0;
        result.reset(0.0, 0.0);
        cout << "Enter target distance (q to quit):";

    }
}