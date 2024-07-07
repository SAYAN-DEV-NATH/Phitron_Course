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
// *****************************(Frequency Array)********************************
/* #include <stdio.h>
#include <string.h>
int main()
{
    char c;
    int cnt[26] = {0};
    while (scanf("%c", &c) != EOF) // (cin>>c)
    {
        cnt[c - 'a']++;
    }
    for (char i = 'a'; i <= 'z'; i++)
    {
        if (cnt[i - 'a'] > 0)
        {
            printf("%c : %d\n", i, cnt[i - 'a']);
        }
    }
    return 0;
} */