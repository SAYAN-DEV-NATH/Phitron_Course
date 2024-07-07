#include <bits/stdc++.h>
using namespace std;

int fact(int n) //.................O(N)
{
    if (n == 0) //...............base case
        return 1;
    int x = fact(n - 1);
    return x * n;
}
int main()
{
    int n;
    cin >> n;
    cout << fact(n);
    return 0;
}