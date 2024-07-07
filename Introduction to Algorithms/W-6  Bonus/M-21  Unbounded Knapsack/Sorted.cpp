#include <bits/stdc++.h>
#define endl "\n"
#define ll long long int
#define ld long double
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int test; cin >> test;

    while(test--)
    {
        int n; cin >> n;
        set<int> s;
        while(n--)
        {
            int x; cin >> x;
            s.insert(x);
        }
        for(int i:s) cout << i << " ";
        cout << endl;
    }
    return 0;
}