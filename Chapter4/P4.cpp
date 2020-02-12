#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main()
{
    string s1, s2;
    cout << "Enter your first name:";
    cin >> s1;
    cout << "Enter your last name:";
    cin >> s2;
    cout << s1 + "," + s2 << endl;
    return 0;
}