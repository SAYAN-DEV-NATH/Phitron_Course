#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {1, 2, 3, 4, 5, 1, 2, 4, 1, 4, 1, 1, 2}; // Type->1
    vector<int>::iterator it;
    it = find(v.begin(), v.end(), 5);
    if (it == v.end())
        cout << "Not found";
    else
        cout << "Found";

    // vector<int> v = {1, 3, 4, 5, 1, 4, 1, 4, 1, 1, 2}; // Type->2
    // auto it = find(v.begin(), v.end(), 2);
    // if (it == v.end())
    //     cout << "Not found";
    // else
    //     cout << "Found";
    return 0;
}