#include <bits/stdc++.h>
#define fastread() (ios_base::sync_with_stdio(0), cin.tie(0))
#define endl "\n"
#define ll long long int
#define ld long double
#define pi pair<ll, ll>
using namespace std;
// vector<ll> items;
// vector<ll> value;
// vector<vector<ll>> dp;
const int N = 1005;
ll dp[N][N];

ll knapsack(ll n, ll w, ll items[], ll value[])
{
    if(n < 0 or w == 0) return 0;
    if(dp[n][w] != -1) return dp[n][w];

    if(items[n-1] <= w)
    {
        ll op1 = knapsack(n-1, w - items[n-1], items, value) + value[n-1];
        ll op2 = knapsack(n-1, w, items, value);
        return dp[n][w] = max(op1, op2);
    }
    else
        return dp[n][w] = knapsack(n-1, w, items, value);
}
int main(){
    fastread();
    ll t; cin >> t;
    while (t--) 
    {
        ll n, w; cin >> n >> w;
        // items.resize(n);
        // value.resize(n);
        // dp.resize(n+1, vector<ll>(w+1, -1));
        ll items[n];
        ll value[n];

        for(int i=1; i<=n; i++)
        {
            for(int j=1; j<=w; j++)
            {
                dp[i][j] = -1;
            }
        }

        for(int i=0; i<n; i++) cin >> items[i];
        for(int i=0; i<n; i++) cin >> value[i];

        cout << knapsack(n, w, items, value) << endl;
        
        // items.clear();
        // value.clear();
        // dp.clear();
    }
    return 0;
}