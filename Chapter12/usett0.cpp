#include<iostream>
#include"tabtenn0.h"

using namespace std;
int main()
{
    TableTennisPlayer player1("Chuck", "Bizzard", true);
    TableTennisPlayer player2("Tara", "Boomdea", false);
    RatedPlayer rplayer1(1140, "Mallory", "Duck", true);
    rplayer1.Name();
    if (rplayer1.HasTable())
        cout << ":has a table" << endl;
    else
        cout << ":has no table" << endl;
    player1.Name();
    if (player1.HasTable())
        cout << ":has a table" << endl;
    else
        cout << ":has no table" << endl;
    player2.Name();
    if (player2.HasTable())
        cout << ":has a table" << endl;
    else
        cout << ":has no table" << endl;
    return 0;
}