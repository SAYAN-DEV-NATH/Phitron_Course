/* #include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    char str[n];
    for (int i = 0; i < n; i++)
        cin >> str[i];

    sort(str, str + n);

    for (int i = 0; i < n; i++)
        cout << str[i];
    return 0;
} */

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    char c;
    int count[26] = {0};
    while (cin >> c)
    {
        count[c - 'a']++;
    }
    for (char i = 'a'; i <= 'z'; i++)
    {
        if (count[i - 'a'] != 0)
        {
            int l = count[i - 'a'];
            while (l--)
            {
                cout << i;
            }
        }
    }
    return 0;
}