# include <iostream>
# include <string>
using namespace std;


int main()
{
    string word;
    int count  = 0;
    cin >> word;
    while (word!= "done")
    {
        count++;
        cin >> word;
    }
    cout << count;
    return 0;
}