#include <bits/stdc++.h>
#define fastread() (ios_base::sync_with_stdio(0), cin.tie(0))
#define endl "\n"
#define ll long long int
#define ld long double
#define pi pair<ll, ll>
using namespace std;
const int N = 1e3+5;
int dp[N][N];

bool equalSum(ll arr[], ll n, ll s)
{
    if(n < 0 or s == 0) return s == 0;
    if(dp[n][s] != -1) return dp[n][s];

    if(arr[n-1] <= s)
    {
        bool op1 = equalSum(arr, n-1, s - arr[n-1]);
        bool op2 = equalSum(arr, n-1, s);
        return dp[n][s] =  (op1 or op2);
    }
    else return dp[n][s] = equalSum(arr, n-1, s);
}
int main(){
    fastread();
    ll t; cin >> t;
    while(t--)
    {
        ll n; cin >> n;
        ll arr[n], sum = 0;
        for(int i=0; i<n; i++) cin >> arr[i], sum += arr[i];

        memset(dp, -1, sizeof(dp));
        if(sum%2==0)
        {
            sum /= 2;
            if(equalSum(arr, n, sum)) cout << "YES" << endl;
            else cout << "NO" << endl;
        }
        else cout << "NO" << endl;
    }
    return 0;
}