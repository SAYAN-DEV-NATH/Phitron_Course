#include <bits/stdc++.h>

using namespace std;
int main()
{
    string s;
    getline(cin, s);
    int cnt = 0;
    bool insideWord = true;
    for (char c : s)
    {
        if (isalpha(c))
        {
            if (insideWord == true)
                cnt++;
            insideWord = false;
        }
        else
        {
            insideWord = true;
        }
    }
    cout << cnt << endl;
    return 0;
}