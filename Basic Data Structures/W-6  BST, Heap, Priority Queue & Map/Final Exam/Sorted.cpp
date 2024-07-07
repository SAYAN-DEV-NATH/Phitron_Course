#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        list<int> l;
        int n;
        cin >> n;
        while (n--)
        {
            int x;
            cin >> x;
            l.push_back(x);
        }
        l.sort();
        l.unique();
        for (int i : l)
        {
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}