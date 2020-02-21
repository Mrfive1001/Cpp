#pragma  once
# include <iostream>

inline void print();

struct polar
{
    double distance;
    double angle;
};

struct rect
{
    double x;
    double y;
};

polar rect_to_polar(rect);
void show_polar(polar);

inline void print()
{
    std::cout << "header prints.\n";
}