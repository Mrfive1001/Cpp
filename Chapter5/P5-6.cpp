#include<iostream>
#include<string>
#include<vector>
#include<array>
#include<stdlib.h>
using namespace std;

int main()
{
    int sale[3][12];
    string month[12] = { "Jan", "Feb", "Mar", "Apr", "May", "Jun", 
                        "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};
    for(int i = 0; i <3; i++)
    {   
        cout << "Year = " << i+1 << endl;
        for(int j = 0; j <12; j++)
        {
            sale[i][j] = rand()%300;
            cout << month[j] << "\t" << sale[i][j] << endl;
        }
    }

    return 0;
}