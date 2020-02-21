# pragma once

typedef double Item;
class Stack
{
private:
    static const int max = 10;
    Item items[max];
    int top;
public:
    Stack();
    bool isEmpty() const;
    bool isFull() const;
    bool push(const Item & item);
    bool pop(Item & item);
};