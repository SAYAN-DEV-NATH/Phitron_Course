#include <bits/stdc++.h>
using namespace std;
int main()
{

    list<int> list1 = {1, 2, 3, 4, 5};

    // auto it = find(list1.begin(), list1.end(), 5);
    auto it = find(list1.begin(), list1.end(), 7);

    if (it == list1.end())
        cout << "Not found\n";
    else
        cout << "Found\n";

    return 0;
}