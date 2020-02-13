#include<iostream>
#include<string>
#include<vector>
#include<array>
using namespace std;
int sum(int arr[][3], int row, int col);
int main()
{
    int arr[2][3] = {1, 2, 3, 4, 5, 6};
    cout << "Sum = " << sum(arr, 2, 3);
    return 0;
}
int sum(int arr[][3], int row, int col)
{
    int total = 0;
    for (int i = 0; i <row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            total += arr[i][j];
        }
    }
    return total;
        
}