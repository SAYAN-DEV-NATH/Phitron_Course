#include <bits/stdc++.h>
using namespace std;
int main()
{
    int size;
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++)
        cin >> arr[i];

    // ascending order
    sort(arr, arr + size);
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";

    cout << endl;
    // descending order
    sort(arr, arr + size, greater<int>());
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    return 0;
}