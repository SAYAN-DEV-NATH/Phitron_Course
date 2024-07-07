//  Creator: Sayan Dev Nath
//  Created: 2024-03-27   17:03:35
/* #include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--)
    {
        int n, q; cin >> n >> q;
        int a[n+5];
        for(int i=1; i<=n; i++) cin >> a[i];

        while(q--)
        {
            int l, r; cin >> l >> r;
            int gc=0;
            for(int i=1; i<=l-1; i++) gc = __gcd(gc,a[i]);
            for(int i=r+1; i<=n; i++) gc = __gcd(gc,a[i]);
            cout << gc << '\n';
        }
    }

    return 0;
} */
//  Creator: Sayan Dev Nath
//  Created: 2024-03-27   17:19:07
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--){
        int n, q; cin >> n >> q;
        int a[n+5];
        for(int i=1; i<=n; i++) cin >> a[i];

        int forward[n+5], backward[n+5];
        forward[0] = backward[n+1] = 0;
        for(int i=1; i<=n; ++i) forward[i]=__gcd(forward[i-1],a[i]);
        for(int i=n; i>=1; --i) backward[i]=__gcd(backward[i+1],a[i]);

        while(q--){
            int l, r; cin >> l >> r;
            cout << __gcd(forward[l-1],backward[r+1]) << '\n';
        }
    }

    return 0;
}