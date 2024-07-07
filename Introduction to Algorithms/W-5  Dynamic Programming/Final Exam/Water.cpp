#include <bits/stdc++.h>
#define fastread() (ios_base::sync_with_stdio(0), cin.tie(0))
#define endl "\n"
#define ll long long int
#define ld long double
#define pi pair<ll, ll>
using namespace std;

int main()
{
    fastread();
    ll test;
    cin >> test;
    while (test--)
    {
        ll n;
        cin >> n;
        ll arr[n], mx = INT_MIN, ai, aj, mn = INT_MIN;
        for(int i=0; i<n; i++)
        {
            cin >> arr[i];
            if(arr[i] > mx)
            {
                mx = arr[i];
                ai = i;
            }
        }
        for(int i=0; i<n; i++)
        {
            if(ai == i) continue;
            if(arr[i] > mn)
            {
                mn = arr[i];
                aj = i;
            }
        }
        if(ai > aj) cout << aj << " " << ai << endl;
        else cout << ai << " " << aj << endl;
    }
    return 0;
}