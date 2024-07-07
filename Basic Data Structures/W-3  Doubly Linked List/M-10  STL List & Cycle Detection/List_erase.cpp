#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> list1 = {1, 2, 3, 4, 5};

    list1.erase(next(list1.begin(), 2));
    // list1.erase(next(list1.begin(), 1), next(list1.begin(), 4));

    for (int i : list1)
    {
        cout << i << " ";
    }
    return 0;
}