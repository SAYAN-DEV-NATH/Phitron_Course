#include <bits/stdc++.h>

using namespace std;
int main()
{
    int testCase;
    cin >> testCase;
    while (testCase--)
    {
        string s;
        cin >> s;
        int sum1 = (s[0] - '0') + (s[1] - '0') + (s[2] - '0');
        int sum2 = (s[3] - '0') + (s[4] - '0') + (s[5] - '0');
        if (sum1 == sum2)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}
// getline(cin, s)
// if (s[0] + s[1] + s[2] == s[3] + s[4] + s[5])