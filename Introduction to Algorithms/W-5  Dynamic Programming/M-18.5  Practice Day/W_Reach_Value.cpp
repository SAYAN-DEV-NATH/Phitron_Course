#include <bits/stdc++.h>
#define fastread() (ios_base::sync_with_stdio(0), cin.tie(0));
#define endl "\n"
#define ll long long int
#define ld long double
#define pi pair<int, int>
using namespace std;
map<ll, bool> dp;

bool knapsack(ll n, ll i)
{
    if (i == n)
        return true;
    if (i > n)
        return false;

    if (dp.find(i) != dp.end())
        return dp[i];
    return dp[i] = (knapsack(n, i * 10) or knapsack(n, i * 20));
}
int main()
{
    ll test;
    cin >> test;
    while (test--)
    {
        ll n;
        cin >> n;
        dp.clear();

        if (knapsack(n, 1))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}