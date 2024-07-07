#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin >> test;
    for (int i = 1; i <= test; i++)
    {
        cout << "Case " << i << ":\n";
        stack<string> back, forward;
        string url = "http://www.lightoj.com/";
        back.push(url);
        while (true)
        {
            string command;
            cin >> command;

            if (command == "VISIT")
            {
                cin >> url;
                cout << url << endl;
                back.push(url);
                forward = stack<string>();
            }
            else if (command == "BACK" && back.size() > 1)
            {
                forward.push(back.top());
                back.pop();
                cout << back.top() << endl;
            }
            else if (command == "FORWARD" && !forward.empty())
            {
                cout << forward.top() << endl;
                back.push(forward.top());
                forward.pop();
            }
            else if (command == "QUIT")
                break;
            else
                cout << "Ignored\n";
        }
    }
    return 0;
}
