#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if ((i == j) && ((i + j) == n + 1))
            {
                cout << "X";
                continue;
            }
            if (i == j)
                cout << "\\";
            if ((i + j) == n + 1)
            {
                cout << "/";
                continue;
            }
            if (i != j)
                cout << " ";
        }
        cout << endl;
    }
    return 0;
}