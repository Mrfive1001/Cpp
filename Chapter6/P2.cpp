#include<iostream>
#include<string>
#include<vector>
#include<array>
using namespace std;

int main()
{
    const int N = 3;
    double donations[N];
    int i = 0;
    for (i = 0; i < N; i++)
    {
        if (!(cin >> donations[i])) break;
    }
    
    return 0;
}