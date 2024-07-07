#include <iostream>

using namespace std;
int main(){
    int a, b;

    // EOF use in C
    // while (scanf("%d %d", &a, &b) != EOF)
    // {
    //     printf("%d %d\n", a, b);
    // }

    // EOF use in C++
    while (cin >> a >> b)
    {
        cout << a << " " << b << endl;
    }
    return 0;
}