#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int n, k, x;
        cin >> n >> k >> x;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            v.push_back(a);
        }
        reverse(v.begin(), v.end());
        while (k--)
        {
            v.pop_back();
        }
    }
    return 0;
}