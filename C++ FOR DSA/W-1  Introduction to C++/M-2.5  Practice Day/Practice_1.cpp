#include <bits/stdc++.h>
using namespace std;
int n;
int *sun()
{
    cin >> n;
    int *arr = new int[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    return arr;
}
int main()
{
    int *arr = sun();
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}