# include<iostream>
# include<string>
# include<cmath>
using namespace std;

int input(int inputscores[])
{
    int count = 0;
    int score;
    cout << "Please input scores: ";
    while (cin >> score)
    {
        inputscores[count++] = score;
        if (count == 10) break;
    }
    return count;
}

void display(int inputscores[], int count)
{
    for (int i = 0; i < count; i++) cout << inputscores[i] << " ";
}

int main()
{
    int scores[10];
    int input_count = 0;
    input_count = input(scores);
    display(scores, input_count);
    return 0;
}