# pragma once
# include <string>
using namespace std;

class TableTennisPlayer
{
    private:
        const int number = 10;
        int *numbers =  new int[number];
        string firstname;
        string lastname;
        bool hasTable;
    public:
        TableTennisPlayer(const string &fn = "none", const string &ln = "none", bool ht = false);
        void Name() const;
        bool HasTable() const { return hasTable; }
        void ResetTable(bool v) { hasTable = v; }
};

class RatedPlayer: public TableTennisPlayer
{
    private:
        int rating;
    public:
        RatedPlayer(int r = 0, const string &fn = "none", const string &ln = "none", bool ht = false);
        RatedPlayer(int r, const TableTennisPlayer& tp);
        int Rating() const { return rating; }
        void ResetRating(int r) {rating = r;}
};