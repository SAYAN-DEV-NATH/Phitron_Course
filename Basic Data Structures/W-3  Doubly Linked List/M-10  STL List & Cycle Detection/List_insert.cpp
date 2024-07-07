#include <bits/stdc++.h>
using namespace std;
int main()
{

    list<int> list1 = {1, 2, 3, 4, 5};
    list<int> list2 = {1, 1, 1, 1, 1};

    // list1.insert(next(list1.begin(), 3), 300);
    // list1.insert(next(list1.begin(), 2), {200, 200, 200});
    list1.insert(next(list1.begin(), 3), list2.begin(), list2.end());

    for (int i : list1)
    {
        cout << i << " ";
    }
    return 0;
}