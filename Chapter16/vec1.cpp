#include<iostream>
#include<string>
#include<vector>
#include<array>
#include<algorithm>
using namespace std;
void Print(const string &);


int main()
{
    int NUM = 2;
    vector<int> ratings(NUM);
    vector<string> titles(NUM);
    cout << "You will do exactly as told.You will enter\n";
    cout << NUM << " book titles and your ratings (0-10).\n";
    int i;
    for(i = 0; i < NUM;i++)
    {
        cout << "Enter title #" << i+1 << ": ";
        getline(cin, titles[i]);
        cout << "Enter your rating (0-10): ";
        cin >> ratings[i];
        cin.get();
    }
    cout << "Thank you." << endl;
    cout << "Rating\t" << "Title" << endl;
    for (i = 0; i < NUM; i++)
    {
        cout << ratings[i] << '\t' << titles[i] << endl;
    }
    for_each(titles.begin(), titles.end(), Print);
    return 0;
}

void Print(const string &title)
{
    cout << title << endl;
}