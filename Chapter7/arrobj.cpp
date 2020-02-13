#include<iostream>
#include<string>
#include<vector>
#include<array>
using namespace std;
const vector<string> Snames = {"Spring", "Summer", "Fall", "Winter"};
void fill(vector<double> &name);
void show(const vector<double> &name);
int main()
{
    vector<double> data = {0, 0, 0, 0};   
    fill(data);
    show(data);
    return 0;
}
void fill(vector<double> &name)
{
    for (int i = 0; i <name.size(); ++i)
    {
        cout << "Enter " << Snames[i] << " expexses: ";
        cin >> name[i];
    }
}
void show(const vector<double> &name)
{
    double total = 0.0;
    cout << "\nEXPENSES\n";
    for(int i = 0; i < name.size(); i++)
    {
        cout << Snames[i] << ": $" << name[i] << endl;
        total += name[i];
    }
    cout << "Total Expenses: $" << total << endl;
}