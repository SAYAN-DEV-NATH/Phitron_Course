/* 
Given array A of N integers. Given Q queries and
in each query given a number X, print count of that number in array.

Constraints
1 <= N <= 10^5
1 <= A[i] <= 10^7
1 <= Q <= 10^5

*/
//  Creator: Sayan Dev Nath
//  Created: 2024-03-26   14:27:00
#include <bits/stdc++.h>
using namespace std;
const int N = 10e5+5;
int hsh[N];

int main() {
    int n; cin >> n;
    for(int i=1; i<n; i++)
    {
        int x; cin >> x;
        hsh[x]++;
    }
    int q; cin >> q;
    while(q--)
    {
        int y; cin >> y;
        cout << hsh[y] << endl;
    }

    return 0;
}