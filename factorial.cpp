/*****************************
-->  Penman: Sayan Dev Nath
-->  Date: 2024-03-23 00:08:31
******************************/
#include <bits/stdc++.h>
#include <iostream>
#include <boost/multiprecision/cpp_int.hpp>
using namespace boost::multiprecision; 
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        cpp_int ans=1;
        for(int i=1; i<=n; i++) ans = ans*i;
        cout << ans << endl;
    }

    return 0;
}
