#include <bits/stdc++.h>
using namespace std;
// class cmp
// {
// public:
//     bool operator()(pair<string, int> a, pair<string, int> b)
//     {
//         if (a.second < b.second)
//             return true;
//         else if (a.second > b.second)
//             return false;
//         else
//         {
//             return a.first.size() < b.first.size();
//         }
//     }
// };
int main()
{
    int test;
    cin >> test;
    cin.ignore();
    while (test--)
    {
        map<string, int> mp;
        string s;
        getline(cin, s);
        stringstream ss(s);
        string word;
        string ans;
        int result = 0;
        while (ss >> word)
        {
            mp[word]++;
            if (mp[word] > result)
            {
                ans = word;
                result = mp[word];
            }
        }
        // priority_queue<pair<string, int>, vector<pair<string, int>>, cmp> pq;
        // for (auto i : mp)
        //     pq.push(i);
        // cout << pq.top().first << " " << pq.top().second << endl;
        // pq.pop();
        cout << ans << " " << result << endl;
    }
    return 0;
}