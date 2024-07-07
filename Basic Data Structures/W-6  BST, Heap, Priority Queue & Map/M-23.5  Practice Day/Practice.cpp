#include <bits/stdc++.h>
using namespace std;

int main()
{
    int year;
    cin >> year;
    stack<int> s;
    for (int i = 0; i < 2; i++)
    {
        int r = year % 10;
        s.push(r);
        year /= 10;
    }
    string ans = "K";
    while (!s.empty())
    {
        ans += s.top() + '0';
        s.pop();
    }
    cout << ans;
}
