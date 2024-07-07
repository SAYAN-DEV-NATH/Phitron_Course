#include <bits/stdc++.h>
using namespace std;
int main()
{
    int size;
    cin >> size;

    int j = size;

    int arr[size];

    for (int i = 0; i < size; i++)
        cin >> arr[i];

    int flag = 1;
    for (int i = 0; i < size / 2; i++)
    {
        if (arr[i] != arr[j - 1])
        {
            flag = 0;
            break;
        }
        j--;
    }
    if (flag == 1)
        cout << "YES\n";
    else
        cout << "NO\n";
    return 0;
}