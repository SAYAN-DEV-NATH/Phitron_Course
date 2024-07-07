#include <bits/stdc++.h>
using namespace std;
void fun(int *&p)
{
    cout << p << endl;
    // *p =
}
int main()
{
    int value = 10;
    int *ptr = &value;

    // fun(&value);
    fun(ptr);
    cout << value << endl;
    cout << *ptr << endl;
    return 0;
}
// &p -- > address
// *&p --> reference
