#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        string s;
        cin >> s;

        stack<int> st;

        if (s.size() % 2 != 0)
            cout << "NO\n";
        else
        {
            bool flag = true;
            for (char c : s)
            {
                if (c == '0')
                {
                    st.push(c);
                }
                else
                {
                    if (st.empty())
                    {
                        flag = false;
                        break;
                    }
                    else
                    {
                        st.pop();
                    }
                }
            }
            if (!st.empty())
                cout << "NO\n";
            else if (flag)
                cout << "YES\n";
            else
                cout << "NO\n";
        }
    }
    return 0;
}