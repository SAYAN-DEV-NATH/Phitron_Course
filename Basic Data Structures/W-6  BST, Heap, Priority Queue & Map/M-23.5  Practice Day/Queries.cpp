#include <bits/stdc++.h>

using namespace std;

int main()
{
    list<int> l;
    int test;
    cin >> test;
    while (test--)
    {
        int x, v;
        cin >> x >> v;
        if (x == 0)
            l.push_front(v);
        else if (x == 1)
            l.push_back(v);
        else if (x == 2)
        {
            if (l.size() > v)
            {
                auto it = l.begin();
                advance(it, v);
                if (it != l.end())
                    l.erase(it);
            }
        }
        for (int i : l)
        {
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}
