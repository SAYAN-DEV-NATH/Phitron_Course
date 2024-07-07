#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> l;
    int queries;
    cin >> queries;
    while (queries--)
    {
        int x, v;
        cin >> x >> v;

        if (x >= 0 and l.size() >= x)
        {
            auto it = l.begin();
            advance(it, x);
            l.insert(it, v);

            cout << "L -> ";
            for (int i : l)
            {
                cout << i << " ";
            }
            cout << endl;
            cout << "R -> ";
            l.reverse();
            for (int i : l)
            {
                cout << i << " ";
            }
            cout << endl;
            l.reverse();
        }
        else
            cout << "Invalid" << endl;
    }
    return 0;
}
