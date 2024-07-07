#include <iostream>
#include <algorithm>
// #include <utility>
using namespace std;

void my_swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    int a, b;
    cin >> a >> b;
    // my_swap(&a, &b);

    swap(a, b); // build function --> swap(), min(), max();

    cout << a << " " << b << endl;
    return 0;
}