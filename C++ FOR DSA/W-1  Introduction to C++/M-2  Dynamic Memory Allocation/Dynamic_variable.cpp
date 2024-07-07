#include <bits/stdc++.h>
using namespace std;
int *sun()
{
    int *a = new int;
    cout << "sun: " << a << "\n";
    *a = 100;
    return a;
}
int main()
{
    int *p = sun();
    cout << "main: " << *p << "\n";
    // int x = 10; // Static variable

    /*
    int *a = new int; // Dynamic Variable
    *a = 10;
    cout << *a << endl;
    delete a;
    */

    /*
    float *f = new float;
    *f = 1.505064;
    cout << f << " \n"
         << *f << endl; // *f dereference
    */
    return 0;
}