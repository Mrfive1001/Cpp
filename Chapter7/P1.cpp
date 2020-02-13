# include<iostream>
# include<string>
# include<cmath>
using namespace std;

float get_mean(float x, float y)
{
    return (x+y)/2;
}
int main()
{
    float x, y;
    bool exit = false;
    while (!exit)
    {
        cout << "Please input two float numbers:";
        cin >> x >> y;
        if (fabs(x) <= 1e-10 || fabs(y) <= 1e-10)
            exit = true;
        else
            cout << "The mean of two inputs is: " << get_mean(x,y) << endl;
    }
    return 0;
}