#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> list1 = {1, 1, 2, 3, 4, 4, 5, 6, 5, 6, 1, 11, 1};

    list1.sort();

    list1.unique();
    for (int i : list1)
    {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}