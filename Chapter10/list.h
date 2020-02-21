# include <iostream>
using namespace std;
typedef double Item;
class List
{
private:
    static const int size = 10;
    Item items[size];
    int current_size;
public:
    List();
    bool append(const Item& item);
    bool isEmpty();
    bool isFull();
    Item& get(int index);
};