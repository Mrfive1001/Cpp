#include<iostream>
#include<string>
#include<vector>
#include<array>
using namespace std;
const int ArSize = 8;
int sum_arr(const int *arr, int n);
int main()
{
    int cookies[ArSize] =  {1, 2, 3, 4, 5, 6, 7, 8};
    int sum = sum_arr(cookies, ArSize);
    cout << "Total: " << sum << endl;
    return 0;
}
int sum_arr(const int *arr, int n)
{
    int total = 0;
    for (int i = 0; i < n; i++)
        total += arr[i];
    arr[n-2] += 10;
    return total;
}