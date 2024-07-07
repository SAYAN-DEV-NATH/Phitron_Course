// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int queries;
//     cin >> queries;
//     while (queries--)
//     {
//         string s;
//         cin >> s;
//         int z = 0, o = 0;
//         for (int i = 0; i < s.size(); i++)
//         {
//             if (s[i] == '0')
//                 z++;
//             else
//                 o++;
//         }
//         if (z == o)
//             cout << "YES\n";
//         else
//             cout << "NO\n";
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        string s;
        cin >> s;
        stack<char> zero, one;
        for (char c : s)
        {
            if (c == '0')
                zero.push(c);
            else
                one.push(c);
        }
        if (zero.size() == one.size())
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}