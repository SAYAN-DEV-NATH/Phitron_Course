//  Creator: Sayan Dev Nath
//  Created: 2024-03-26   20:26:22
/* 
Given 2D array a of N*N integers. Given Q queries and in each query 
given a, b, c, d. Print sum of square represented by (a,b) as top left
point and (c,d) as top bottom right point

constraints
1 <= N <= 10^3
1 <= a[i][j] <= 10^9
1 <= Q <= 10^5
1 <= a,b,c,d <= N
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;
    int arr[n+1][n+1];
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            cin >> arr[i][j];
        }
    }
    int q; cin >> q;
    while(q--)
    {
        int sum = 0;
        int a, b, c, d; cin >> a >> b >> c >> d;
        for(int i=a; i<=c; i++)
        {
            for(int j=b; j<=d; j++)
            {
                sum += arr[i][j];
            }
        }
        cout << sum << endl;
    }
    return 0;
}