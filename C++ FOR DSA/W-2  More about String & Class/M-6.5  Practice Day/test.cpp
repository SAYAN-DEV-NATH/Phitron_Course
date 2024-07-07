#include <bits/stdc++.h>

using namespace std;
int main()
{
    int testCase;
    cin >> testCase;
    while (testCase--)
    {
        int size;
        cin >> size;
        char s[size];
        int cnt[26] = {0};
        for (int i = 0; i < size; i++)
        {
            cin >> s[i];
            cnt[s[i] - 'A']++;
        }
        int ans = 0;
        for (char i = 'A'; i <= 'Z'; i++)
        {
            if (cnt[i - 'A'] != 0)
            {
                ans += cnt[i - 'A'] + 1;
            }
        }
        cout << ans << endl;
    }
    return 0;
}