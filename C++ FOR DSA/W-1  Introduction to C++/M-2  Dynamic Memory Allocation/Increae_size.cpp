#include <bits/stdc++.h>

using namespace std;
int main()
{
    /*
    int *arr = new int[3];
    for (int i = 0; i < 3; i++)
        cin >> arr[i];
    for (int i = 0; i < 3; i++)
        cout << arr[i] << " \n";

    delete[] arr;

    for (int i = 0; i < 3; i++)
        cout << arr[i] << " ";
    */

    int *arr1 = new int[3];
    int *arr2 = new int[3];
    for (int i = 0; i < 3; i++)
    {
        cin >> arr1[i];
        arr2[i] = arr1[i];
    }
    delete[] arr1;

    arr1 = new int[5];
    for (int i = 0; i < 3; i++)
        arr1[i] = arr2[i];

    delete[] arr2;

    arr1[3] = 4;
    arr1[4] = 5;
    for (int i = 0; i < 5; i++)
        cout << arr1[i] << " ";
    delete[] arr1;
    return 0;
}