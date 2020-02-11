#include<iostream>
using namespace std;

int main()
{
    const int day2hour = 24, hour2minute = 60, minute2second = 60;
    long long seconds;
    cout << "Enter the number of seconds: ";
    cin >> seconds;
    cout << seconds << " seconds = " << seconds/day2hour/hour2minute/minute2second;
    cout << " days, " << seconds%(day2hour*hour2minute*minute2second)/(hour2minute*minute2second);
    cout << " hours, " << seconds%(hour2minute*minute2second)/(minute2second);
    cout << " minutes, " << seconds%minute2second << " seconds";
    return 0;
}