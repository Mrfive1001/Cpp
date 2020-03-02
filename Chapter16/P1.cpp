#include<iostream>
#include<string>

using namespace std;

bool isValid(const string&);


int main()
{
    string input_user;
    cout << "Enter the string:";
    getline(cin, input_user);
    cout << isValid(input_user);
    return 0;
}

bool isValid(const string& input)
{
    auto lptr = input.begin();
    auto rptr = input.end();
    rptr--;
    while (lptr < rptr)
    {
        if (*lptr != *rptr) return false;
        rptr -= 1;
        lptr += 1;
    }
    return true;
}