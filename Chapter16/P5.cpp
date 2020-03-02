#include<iostream>
#include<string>
#include<algorithm>
#include<vector>

using namespace std;
template <class T>
int reduce(T ar[], int n);
template <class T>
void Print(const T& a);
int main()
{
    long a[] = {1, 3, 5, 32, 1};
    string b[] = { "Hello", "world", "Hello", "World"};
    cout << reduce(a, 5) << endl;
    cout << reduce(b, 4);
}
template <class T>
void Print(const T& a)
{
    cout << a << " ";
}

template <class T>
int reduce(T ar[], int n)
{
    vector<T> res(ar, ar + n);
    sort(res.begin(), res.end());
    auto last = unique(res.begin(), res.end());
    for_each(res.begin(), last, Print<T>);
    cout << endl;
    int size = last - res.begin();
    return size;
}

