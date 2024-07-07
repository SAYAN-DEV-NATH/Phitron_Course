#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {2, 3, 4, 5, 6, 7, 8, 9};
    int x;
    cin >> x;
    v.push_back(x);
    int currentIndex = v.size() - 1;
    while (currentIndex != 0)
    {
        int parentIndex = (currentIndex - 1) / 2;
        if (v[currentIndex] < v[parentIndex])
            swap(v[currentIndex], v[parentIndex]);
        else
            break;
        currentIndex = parentIndex;
    }
    for (int i : v)
        cout << i << " ";

    return 0;
}