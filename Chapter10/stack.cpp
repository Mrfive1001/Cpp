# include "stack.h"
# include<iostream>
using namespace std;
Stack::Stack()
{
    top = 0;
}
bool Stack::isEmpty() const
{
    return top == 0;
}
bool Stack::isFull() const
{
    return top == max;
}
bool Stack::push(const Item & item)
{
    if (isFull()) return false;
    items[top++] = item;
}
bool Stack::pop(Item & item)
{
    if (isEmpty()) return false;
    item = items[--top];
}

int main()
{
    Stack stack;
    stack.push(10);
    double value = 3;
    stack.pop(value);
    cout << value << endl;
    char ch;
    cin >> ch;
    return 0;
}