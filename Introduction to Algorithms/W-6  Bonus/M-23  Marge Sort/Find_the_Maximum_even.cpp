#include <bits/stdc++.h>
// #define fastread() (ios_base::sync_with_stdio(0), cin.tie(0))
#define endl "\n"
#define ll long long int
#define ld long double
#define pi pair<ll, ll>
using namespace std;

int main() {
    // fastread();
    ll n; cin >> n;

    ll arr[n], mx = INT_MIN;
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
        if(arr[i]%2==0 && arr[i] > mx) mx = arr[i];
    }

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(i == j) continue;
            ll ans = arr[i] + arr[j];
            if(ans%2==0 && ans > mx) mx = ans;
        }\
    }

    cout << mx << endl;

    return 0;
}