#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test_case;
    cin >> test_case;
    while (test_case--)
    {
        int n;
        char c;
        cin >> n >> c;
        for (int i = 0; i < n; i++)
        {
            if (i == n - 1)
                cout << c;
            else
                cout << c << " ";
        }
        cout << "\n";
    }
    return 0;
}