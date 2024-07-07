#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int test;
    cin >> test;

    while (test--)
    {
        int n, k, cnt = 0, cnt1 = 0;
        cin >> n >> k;

        vector<int> a(n);
        set<int> st;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            st.insert(a[i]);

            if (a[i] <= n)
                cnt++;
            else
                cnt1++;
        }

        if (n == st.size())
        {
            if (cnt == n)
                cout << "YES"
                     << "\n";
            else
            {
                if (k >= cnt1)
                    cout << "YES"
                         << "\n";
                else
                    cout << "NO"
                         << "\n";
            }
        }
        else
        {
            cnt1 += (n - st.size());
            if (k >= cnt1)
                cout << "YES"
                     << "\n";
            else
                cout << "NO"
                     << "\n";
        }
    }
    return 0;
}