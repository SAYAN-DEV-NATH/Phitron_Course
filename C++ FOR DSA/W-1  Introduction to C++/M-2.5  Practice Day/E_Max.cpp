#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int m = max_element(a, a + n) - a;
    cout << a[m] << endl;
    return 0;
}