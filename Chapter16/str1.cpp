#include<iostream>
#include<string>
#include<vector>
#include<array>
using namespace std;

int main()
{
    string one("Lottery!");
    cout << one << endl;
    string two(20, '$');
    cout << two << endl;
    string three(one);
    cout << three << endl;
    one += " Oops!";
    cout << one << endl;
    two = "Sorry! That was";
    three[0] = 'P';
    string four;
    four = two + three;
    cout << four << endl;
    char alls[] = "All is well that ends well.";
    string five(alls, 20);
    cout << five << endl;
    string six(alls+6, alls+10);
    cout << six << endl;
    string seven(&five[6], &five[10]);
    cout << seven << endl;
    string eight(four, 7, 16);
    cout << eight << endl;
    return 0;
}