#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 1e5 + 5;
vector<ll> dp(N, -1);

ll fibo(ll n) //............O(N)
{
    if (n == 0 || n == 1)
        return n;
    if (dp[n] != -1)
        return dp[n];

    ll ans = fibo(n - 1) + fibo(n - 2); //.........sub problem
    dp[n] = ans;
    return ans;
}

int main()
{
    int n;
    cin >> n;
    cout << fibo(n);
    return 0;
}