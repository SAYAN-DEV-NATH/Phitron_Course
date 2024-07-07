#include <bits/stdc++.h>
#define endl "\n"
#define ll long long int
#define ld long double
using namespace std;

int main()
{
    // ios::sync_with_stdio(0);
    // cin.tie(0);
    int test;
    cin >> test;
    getchar();
    // cin.ignore();
    while (test--)
    {
        map<string, int> mp;
        string str;
        getline(cin, str);
        stringstream ss(str);
        string word, ansname;
        int ansvalue = 0;
        while (ss >> word)
        {
            mp[word]++;
            if (mp[word] > ansvalue)
            {
                ansname = word;
                ansvalue = mp[word];
            }
        }
        cout << ansname << " " << ansvalue << endl;
    }
    return 0;
}