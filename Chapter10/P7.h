# pragma once
# include <iostream>
# include <string>
using namespace std;

class Plorg
{
private:
    string name;
    int CI;
public:
    Plorg(string m_name = "Plorga", int m_ci = 50);
    inline bool set_ci(int m_ci) {CI = m_ci;}
    bool report();
    
};