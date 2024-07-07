#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int size, total, i;
        cin >> size >> total;
        int arr[size];
        for (i = 0; i < size; i++)
        {
            cin >> arr[i];
        }
        int flag = 0;
        for (i = 0; i < size; i++)
        {
            int sum = 0;
            for (int j = i + 1; j < size; j++)
            {
                for (int k = j + 1; k < size; k++)
                {
                    sum = arr[i] + arr[j] + arr[k];
                    if (sum == total)
                    {
                        flag = 1;
                    }
                }
            }
        }
        if (flag == 1)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}