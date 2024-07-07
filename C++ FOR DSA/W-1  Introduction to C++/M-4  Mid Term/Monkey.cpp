/* #include <bits/stdc++.h>
using namespace std;
int main()
{
    char str[100001];
    while (cin.getline(str, 100001))
    {
        int count1[26] = {0};
        int str1len = strlen(str);
        for (int i = 0; i < str1len; i++)
        {
            count1[str[i] - 'a']++;
        }
        for (char i = 'a'; i <= 'z'; i++)
        {
            if (count1[i - 'a'] != 0)
            {
                int n = count1[i - 'a'];
                while (n--)
                {
                    cout << i;
                }
            }
        }
        cout << "\n";
    }
    return 0;
} */

#include <bits/stdc++.h>
using namespace std;
int main()
{
    char str[100001];
    while (cin.getline(str, 100001))
    {
        int len = strlen(str);
        sort(str, str + len);
        for (int i = 0; i < len; i++)
        {
            if (str[i] != ' ')
            {
                cout << str[i];
            }
        }
        cout << endl;
    }
    return 0;
}