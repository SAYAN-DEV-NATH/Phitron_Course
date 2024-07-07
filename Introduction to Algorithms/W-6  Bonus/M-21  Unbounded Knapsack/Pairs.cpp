#include <bits/stdc++.h>
#define endl "\n"
#define ll long long int
#define ld long double
using namespace std;

bool cmp(pair<string, int> a, pair<string, int> b)
{
    if (a.first < b.first)
        return true;
    else if (a.first == b.first)
        return a.second > b.second;
    else
        return false;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    vector<pair<string, int>> v;

    while (n--)
    {
        string name;
        int roll;
        cin >> name >> roll;
        v.push_back({name, roll});
    }
    sort(v.begin(), v.end(), cmp);
    for(auto i:v) cout << i.first << " " << i.second << endl;

    return 0;
}