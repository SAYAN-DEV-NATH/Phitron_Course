#include <bits/stdc++.h>

using namespace std;
int main()
{
    string s;
    cin >> s;
    // for (int i = 0; i < s.size(); i++)
    // {
    //     cout << s[i] << endl;
    // }

    /* // cout << s.begin() << endl;      // invalid method
    cout << *s.begin() << endl;
    // cout << s.end() << endl;        // invalid method
    cout << *s.end() << endl;
    cout << *(s.end() - 1) << endl; */

    string::iterator i;
    for (i = s.begin(); i < s.end(); i++)
    {
        // cout << i << endl;
        cout << *i << endl;
    }
    // for (string::iterator i = s.begin(); i < s.end(); i++)
    // for (auto i = s.begin(); i < s.end(); i++)       // C++ 17,20 support kore

    return 0;
}