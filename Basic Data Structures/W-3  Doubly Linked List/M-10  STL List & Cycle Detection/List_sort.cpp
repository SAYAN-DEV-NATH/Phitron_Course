#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> list1 = {1, 1, 2, 3, 4, 5, 6, 1, 11, 1};

    list1.sort();
    for (int i : list1)
    {
        cout << i << " ";
    }
    cout << endl;

    list1.sort(greater<int>());
    for (int i : list1)
    {
        cout << i << " ";
    }

    return 0;
}