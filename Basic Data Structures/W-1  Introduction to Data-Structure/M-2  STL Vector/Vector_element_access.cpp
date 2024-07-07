#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {1, 2, 3, 4, 5, 6};

    cout << v[0] << endl; // Type->1;
    cout << v[4] << endl;

    cout << v.at(2) << endl; // Type->2;

    cout << v.back() << endl; // Type->3;
    cout << v.back() - 1 << endl;
    cout << v.back() + 10 << endl;

    cout << v.front() << endl; // Type->4;
    cout << v.front() + 1 << endl;
    cout << v.front() - 10 << endl;

    return 0;
}