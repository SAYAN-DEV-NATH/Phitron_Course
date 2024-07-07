#include <bits/stdc++.h>

using namespace std;
void solve(int n)
{
    for (int i = 1; i <= 26; i++)
    {
        for (int j = 1; j <= 26; j++)
        {
            for (int k = 1; k <= 26; k++)
            {
                string s;
                if (i + j + k == n)
                {
                    s.push_back('a' + i - 1);
                    s.push_back('a' + j - 1);
                    s.push_back('a' + k - 1);
                    cout << s << endl;
                    return;
                }
            }
        }
    }
}
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int n;
        cin >> n;
        solve(n);
    }
    return 0;
}