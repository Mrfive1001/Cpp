#include<iostream>
using namespace std;

int main()
{
    int yams[3] = {7, 8, 6};
    int yamcosts[3] = {20, 30, 5};

    cout << "Total yams = ";
    cout << yams[0] + yams[1] + yams[2] << endl;
    cout << "The package with " << yams[1] << "yams costs ";
    cout << yamcosts[1] << "cents per yam.\n";

    int total = yams[0]*yamcosts[0] + yams[1]*yamcosts[1] + yams[2]*yamcosts[2];
    cout << "Total yam expense is "<< total << endl;
    cout << "\nSize of yams array = " << sizeof(yams);
    cout << " bytes.";
    return 0;
}