//   ********
//  ***    ***
// **        **
//*            *
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int s = n - 1, k = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j <= s; j++)
            cout << " ";
        if (i == 0)
        {
            for (int j = 0; j < 2 * n; j++)
                cout << "*";
        }
        else
        {
            for(int j=0; j<s+1; j++) cout << "*";
            for(int j=0; j<4*k; j++) cout << " ";
            for(int j=0; j<s+1; j++) cout << "*";
            k++;
        }
        s--;
        cout << endl;
    }
    s = 1, k -= 2;
    for (int i = 0; i < n-1; i++)
    {
        for (int j = 1; j <= s; j++)
            cout << " ";
        if (i == n-1)
        {
            for (int j = 0; j < 2 * n; j++)
                cout << "*";
        }
        else
        {
            for(int j=0; j<s+1; j++) cout << "*";
            for(int j=0; j<4*k; j++) cout << " ";
            for(int j=0; j<s+1; j++) cout << "*";
            k--;
        }
        s++;
        cout << endl;
    }
    return 0;
}
