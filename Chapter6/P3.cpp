# include<iostream>
# include<string>
# include<iomanip>
using namespace std;

int main()
{
    cout << "Please enter one of the following choices: " << endl;
    cout << setw(20) << left << "c) carnivore" << "p) pianist" << endl;
    cout << setw(20) << left << "t) tree" << "g) game" << endl;
    char ch;
    bool exit = false;
    while (true)
    {
        cout << "Please enter a c, p, t or g: ";
        cin >> ch;
        exit = true;
        switch(ch)
        {   
            case 'c' : cout << "input c";break;
            case 'p' : cout << "input p";break;
            case 't' : cout << "input t";break;
            case 'g' : cout << "input g";break;
            default: exit = false; 
        }
        if(exit) break;
    }
    return 0;
}