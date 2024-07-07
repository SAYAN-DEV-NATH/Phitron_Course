#include <bits/stdc++.h>

using namespace std;
int s;
int *sun()
{

    cin >> s;
    // Initialize
    // int *arr = new int[5]{1, 2, 3, 4, 5};
    int *arr = new int[s];
    for (int i = 0; i < s; i++)
        cin >> arr[i];

    return arr;
}

int main()
{
    int *arr = sun();
    for (int i = 0; i < s; i++)
        cout << arr[i] << " ";
    delete[] arr;
    return 0;
}