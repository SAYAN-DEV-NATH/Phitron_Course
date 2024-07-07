#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    char s;
    cin >> a >> s >> b;
    switch (s)
    {
    case '>':
        if (a > b)
            cout << "Right\n";
        else
            cout << "Wrong\n";
        break;
    case '<':
        if (a < b)
            cout << "Right\n";
        else
            cout << "Wrong\n";
        break;
    default:
        if (a == b)
            cout << "Right\n";
        else
            cout << "Wrong\n";
        break;
    }
    return 0;
}