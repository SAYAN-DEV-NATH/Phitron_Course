#include <bits/stdc++.h>
using namespace std;

int fibo(int index) //............O(2^n) == 20
{
    if (index == 0 or index == 1)
        return index;
    int ans = fibo(index - 1) + fibo(index - 2);
    return ans;
}
int main()
{
    int index;
    cin >> index;
    cout << fibo(index);
    return 0;
}
//  0   1   1   2   3   5 .........fibonacci series
// [0] [1] [2] [3] [4] [5] .........index
