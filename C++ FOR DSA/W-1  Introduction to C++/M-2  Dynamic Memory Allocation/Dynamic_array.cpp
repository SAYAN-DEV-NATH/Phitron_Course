#include <bits/stdc++.h>

using namespace std;
int main()
{
    // int arr[100] // Static Array

    int size;
    cin >> size;
    int *arr = new int[size]; // Dynamic Array
    for (int i = 0; i < size; i++)
        cin >> arr[i];

    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    delete[] arr;
    return 0;
}