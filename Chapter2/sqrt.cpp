#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double area;
    cout << "Enter: ";
    cin >> area;
    double side;
    side = sqrt(area);
    cout << "The result is " << side << "." << endl;
    return 0;
}
