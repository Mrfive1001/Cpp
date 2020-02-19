# include<iostream>
# include<string>
using namespace std;
template <class T>
T maxn(T inputList[], int inputSize)
{
    if (inputSize == 0) return inputList[0];
    T maxValue = inputList[0];
    for (int i = 1; i < inputSize; i++)
    {
        if (inputList[i] > maxValue) maxValue = inputList[i];
    }
    return maxValue;
}


int main()
{
    int array1[10] = {10,34,5,65,34,665,34};
    float array2[3] = {-10, -2.909, -3.6};
    cout << maxn(array1, 10) <<endl;
    cout << maxn(array2, 3);
    return 0;
}