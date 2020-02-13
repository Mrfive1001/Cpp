#include<iostream>
#include<string>
#include<vector>
#include<array>
#include<fstream>
using namespace std;

int main()
{
    ifstream file;
    file.open("file.txt");
    char ch;
    int count = 0;
    while(file.get(ch))
    {
        if(isalpha(ch))
        {
            count++;
            cout << ch;
        }
    }
    cout << "\nTotal char number: " << count<< endl;
    return 0;
}