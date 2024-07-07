#include <bits/stdc++.h>
using namespace std;
int main()
{

    list<int> list1 = {1, 2, 3, 4, 5};
    replace(list1.begin(), list1.end(), 2, 20);

    for (int i : list1)
    {
        cout << i << " ";
    }
    return 0;
}