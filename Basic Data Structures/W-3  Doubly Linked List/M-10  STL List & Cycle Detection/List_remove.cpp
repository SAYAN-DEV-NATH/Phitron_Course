#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> list1 = {1, 1, 2, 3, 4, 5, 6, 1, 11, 1};

    list1.remove(1);
    for (int i : list1)
    {
        cout << i << " ";
    }
    cout << endl;

    list1.remove(2);
    for (int i : list1)
    {
        cout << i << " ";
    }
    return 0;
}