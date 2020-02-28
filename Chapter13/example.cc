#include <iostream>
#include "example.h"

using namespace std;

namespace example
{
    Base::Base(int m_x, int m_y):x(m_x), y(m_y) {}
    
    Derived::Derived(int m_x, int m_y, double m_s):Base(m_x, m_y), s(m_s) {}

    Derived::Derived(const Base &b, double m_s):Base(b), s(m_s) {}

    void Derived::Print() const
    {
        cout << "x = " << x << ",y = " << y << ",s = " << s << endl;
    }

}