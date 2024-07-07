#include <bits/stdc++.h>
// #define fastread() (ios_base::sync_with_stdio(0), cin.tie(0))
#define endl "\n"
#define ll long long int
#define ld long double
#define pi pair<ll, ll>
using namespace std;

int main() {
    // fastread();
    ll test; cin >> test;

    while(test--)
    {
        ll n; cin >> n;
        char ch;
        stack<char> st1, st2;
        while(n--)
        {
            cin >> ch;
            if(ch == '(') st1.push(ch);
            else st2.push(ch);
        }
        if(st1.size() == st2.size()) cout << "Possible" << endl;
        else cout << "Impossible" << endl;
    }
    return 0;
}