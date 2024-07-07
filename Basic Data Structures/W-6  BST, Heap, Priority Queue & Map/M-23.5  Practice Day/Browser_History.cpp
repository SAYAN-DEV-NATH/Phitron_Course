#include <bits/stdc++.h>

using namespace std;

int main()
{
    list<string> l;
    while (true)
    {
        string s;
        cin >> s;
        if (s == "end")
            break;
        l.push_back(s);
    }
    auto current = l.begin();
    int queries;
    cin >> queries;
    while (queries--)
    {
        string command;
        cin >> command;
        if (command == "visit")
        {
            string address;
            cin >> address;
            auto f = find(l.begin(), l.end(), address);
            if (f != l.end())
            {
                current = f;
                cout << *current << endl;
            }
            else
            {
                cout << "Not Available" << endl;
            }
        }
        else if (command == "next")
        {
            auto it = current;
            it++;
            if (it != l.end())
            {
                current++;
                cout << *current << endl;
            }
            else
                cout << "Not Available" << endl;
        }
        else if (command == "prev")
        {
            auto it = current;
            it--;
            if (it != l.end())
            {
                current--;
                cout << *current << endl;
            }
            else
                cout << "Not Available" << endl;
        }
    }
    return 0;
}
