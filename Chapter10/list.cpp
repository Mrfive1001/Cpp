# include"list.h"

List::List(){current_size = 0;}
bool List::append(const Item& item)
{
    if (isFull()) return false;
    items[current_size++] = item;
    return true;
}
bool List::isFull(){return current_size == size;}
bool List::isEmpty(){return current_size == 0;}
Item& List::get(int index){return items[index];}

int main()
{
    List l1;
    l1.append(10.23);
    cout << l1.get(0) << endl;
    l1.get(0) = 4.5;
    cout << l1.get(0);
    char ch;
    cin >> ch;
    return 0;
}