#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k, a;
    cin >> n >> k >> a;
    long long x = (n * k) / a;
    double y = (n * k) / a;
    if (y - x > 0)
        cout << "double\n";
    else if (x > 2147483647)
        cout << "long long\n";
    else
        cout << "int\n";
    return 0;
}
