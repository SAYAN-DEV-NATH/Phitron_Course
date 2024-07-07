#include <bits/stdc++.h>
#define fastread() (ios_base::sync_with_stdio(0), cin.tie(0))
#define endl "\n"
#define ll long long int
#define ld long double
#define pi pair<ll, ll>
using namespace std;

int main() {
    fastread();
    ll n, h; cin >> n >> h;

    vector<ll> v(n);
    ll mx = INT_MIN;
    for(int i=0; i<n; i++) 
    {
        cin >> v[i];
        if(v[i] > mx)
            mx = v[i];
    }
    mx--;
    ll sum = ((1+mx)*mx)/2;
    if(h > sum) cout << "Hablu" << endl;
    else cout << "Dablu" << endl;

    return 0;
}