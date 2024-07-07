#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c;
    char q, s;
    cin >> a >> s >> b >> q >> c;
    switch (s)
    {
    case '+':
        if ((a + b) == c)
            cout << "Yes\n";
        else
            cout << a + b << endl;
        break;
    case '-':
        if ((a - b) == c)
            cout << "Yes\n";
        else
            cout << a - b << endl;
        break;
    default:
        if ((a * b) == c)
            cout << "Yes\n";
        else
            cout << a * b << endl;
        break;
    }
    return 0;
}