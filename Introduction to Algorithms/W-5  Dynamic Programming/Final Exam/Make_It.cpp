#include <bits/stdc++.h>
#define fastread() (ios_base::sync_with_stdio(0), cin.tie(0))
#define endl "\n"
#define ll long long int
#define ld long double
#define pi pair<ll, ll>
using namespace std;
const ll N = 1e5+5;
ll dp[N];

int make_it(ll n, ll i)
{
    if(i >= n) return (n==i);
    if(dp[i] != -1) return dp[i];

    int op1 = make_it(n, i+3);
    int op2 = make_it(n, i*2);
    
    return dp[i] = (op1 or op2);
}
int main(){
    fastread();
    ll t; cin >> t;
    while(t--)
    {
        ll n; cin >> n;
        
        for(int i=0; i<=n; i++) dp[i] = -1;

        if(make_it(n, 1)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}