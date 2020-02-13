#include<iostream>
#include<string>
#include<vector>
#include<array>
#include<cctype>
using namespace std;

int main()
{
    char ch;
    char ch1 = 65;
    cout << ch1 << endl;
    cin.get(ch);
    while(ch != '@')
    {
        if(isalpha(ch))
        {
            if(isupper(ch))
                ch1 = tolower(ch);
            else
                ch1 =  toupper(ch);
            cout << ch1;
        }
        cin.get(ch);
    }
    return 0;
}