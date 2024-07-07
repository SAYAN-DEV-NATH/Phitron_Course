#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[3];
    for (int i = 0; i < 3; i++)
        cin >> a[i];
    int mn = min_element(a, a + 3) - a;
    int mx = max_element(a, a + 3) - a;
    cout << a[mn] << " " << a[mx];
    return 0;
}