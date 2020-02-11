# include <iostream>
using namespace std;

const float convert = 0.833333;

int main()
{
    int height;
    cout << "Input the height: __________\b\b\b\b\b\b";
    cin >> height;
    cout << convert*height << endl;
}