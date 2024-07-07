#include <bits/stdc++.h>
using namespace std;

void print_normal(list<int> list1)
{
    cout << "L -> ";
    for (int &i : list1)
    {
        cout << i << " ";
    }
    cout << endl;
}

void print_reverse(list<int> list1)
{
    list1.reverse();
    cout << "R -> ";
    for (int &i : list1)
    {
        cout << i << " ";
    }
    cout << endl;
}

int main()
{
    list<int> list1;
    int queries;
    cin >> queries;
    while (queries--)
    {
        int x, v;
        cin >> x >> v;
        int sz = list1.size();
        if (x == 0)
        {
            list1.push_front(v);
            print_normal(list1);
            print_reverse(list1);
        }
        else if (x == 1)
        {
            list1.push_back(v);
            print_normal(list1);
            print_reverse(list1);
        }
        else if (x == 2)
        {
            if (v == 0)
            {
                list1.erase(next(list1.begin(), 0));
                print_normal(list1);
                print_reverse(list1);
            }
            else if (sz > v)
            {
                list1.erase(next(list1.begin(), v));
                print_normal(list1);
                print_reverse(list1);
            }
            else
            {
                print_normal(list1);
                print_reverse(list1);
            }
        }
    }

    return 0;
}