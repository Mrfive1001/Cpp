#include<iostream>
#include<cstdlib>
#include<ctime>
#include"vector.h"
#include <fstream>

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
    int loops = 0;
    cout << "Enter target distance (q to quit): ";
    ofstream fout("file.walk");
    while (cin >> target)
    {   
        cout <<  "Enter step length: ";
        if (! (cin >> dstep))
        {
            break;
        }
        cout << "Enter loop number: ";
        if (! (cin >> loops))
        {
           break;
        }
        fout << "Target: " << target << endl;
        for (int i = 0; i <loops ; i++)
        {   
            fout << "Loop: " << i + 1 << endl;
            while (result.magval() < target)
            {
                direction = rand() % 360;
                step.reset(dstep, direction, Vector::POL);
                result =  result + step;
                steps += 1;
                fout << result.xval() << "," << result.yval() << endl;
            }
            steps = 0;
            result.reset(0.0, 0.0);
        }
        cout << "Enter target distance (q to quit):";
    }
    fout.close();
}