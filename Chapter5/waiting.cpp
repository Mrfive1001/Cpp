#include<iostream>
#include<string>
#include<vector>
#include<array>
#include<ctime>
using namespace std;

int main()
{
    int seconds;
    long delay;
    cout << "Enter seconds:";
    cin >> seconds;
    delay = seconds * CLOCKS_PER_SEC;
    long start = clock();
    while (clock() - start < delay){}
    cout << seconds << "seconds passed" << endl;
    return 0;
}