#include<iostream>
#include<vector>
#include<array>
using namespace std;

int main()
{
    vector<int>v1{1, 2, 3, 4};
    vector<int>v2;
    array<int, 4>a1{10, 20, 50, 60};
    array<int, 4>a2;
    a2 = a1;
    v2 = v1;
    cout << &v1 << ", " << &v2 << endl;
    cout << &a1 << ", " << &a2 << endl;
    return 0;
}