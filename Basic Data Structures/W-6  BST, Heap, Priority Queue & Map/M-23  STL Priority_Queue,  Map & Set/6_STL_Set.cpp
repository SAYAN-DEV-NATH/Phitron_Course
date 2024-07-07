#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    set<int> s;
    while (n--) // nlog(n);
    {
        int x;
        cin >> x;
        s.insert(x); // log(n);
    }
    for (auto it = s.begin(); it != s.end(); it++)
    {
        cout << *it << " ";
    }
    return 0;
}