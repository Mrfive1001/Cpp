# include <iostream>
# include <string>
using namespace std;

struct CandyBar {
    int brand;
    float weight;
    int calorie;
};

void printCandy(CandyBar candy)
{
    cout << "Brand: " << candy.brand << endl;
    cout << "Weight: " << candy.weight << endl;
    cout << "Calorie: " << candy.calorie << endl;
}

int main()
{   
    CandyBar candy1{1, 10.3, 100};
    CandyBar candies[3];
    CandyBar *pCandy = new CandyBar [10];

    candies[0] = candy1;
    candies[1] = {10, 20.3, 30};
    candies[2] = candies[1];
    for(int i = 0; i < 3; i++)
    {
        printCandy(candies[i]);
    }
    delete [] pCandy;
    return 0;
}