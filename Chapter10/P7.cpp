# include"P7.h"


Plorg::Plorg(string m_name, int m_ci):name(m_name),CI(m_ci){}

bool Plorg::report()
{
    cout << "The name is: "<< name << endl;
    cout << "The CI is: "<< CI << endl;
}
int main()
{
    Plorg p1("Zhou");
    p1.report();

    char ch;
    cin >> ch;
    return 0;
}