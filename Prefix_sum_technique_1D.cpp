//  Creator: Sayan Dev Nath
//  Created: 2024-03-26   20:16:08
/* 
Given array A of N integers. Given Q queries and in each query given 
L and R print sum of array elements from index L to R(L,R included)

Constraints
1 <= N <= 10^5
1 <= A[i] <= 10^9
1 <= Q <= 10^5
1 <= L,R <=N
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;
    int a[n+1], pre[n+1];
    for(int i=1; i<=n; i++)
    {
        cin >> a[i];
        pre[i] = pre[i-1] + a[i];
    }
    int q; cin >> q;
    while(q--)
    {
        int l, r; cin >> l >> r;
        cout << pre[r] - pre[l-1] << endl;
    }

    return 0;
}