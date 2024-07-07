#include <bits/stdc++.h>
using namespace std;
int main()
{
    // vector<int> v;       type->1
    // cout << v.size();

    // vector<int> v;           type->2
    // cout << v.max_size();

    // vector<int> v;                   type->3
    // cout << v.capacity() << endl;
    // v.push_back(10);
    // cout << v.capacity() << endl;
    // v.push_back(20);
    // cout << v.capacity() << endl;
    // v.push_back(30);
    // cout << v.capacity() << endl;
    // v.push_back(40);
    // cout << v.capacity() << endl;
    // v.push_back(50);
    // cout << v.capacity() << endl;

    // vector<int> v;                   type->4
    // v.push_back(1);
    // v.push_back(2);
    // v.push_back(3);
    // v.push_back(4);
    // for (int i = 0; i < v.size(); i++)
    // {
    //     cout << v[i] << " ";
    // }

    // vector<int> v;                   type->5
    // v.push_back(1);
    // v.push_back(2);
    // v.push_back(3);
    // v.push_back(4);
    // v.clear();
    // for (int i = 0; i < v.size(); i++)
    // {
    //     cout << v[i] << " ";
    // }

    // vector<int> v;           type->6
    // v.push_back(1);
    // v.push_back(2);
    // v.push_back(3);
    // v.push_back(4);
    // v.clear();
    // for (int i = 0; i < v.size(); i++)
    // {
    //     cout << v[i] << " ";
    // }
    // cout << v[0] << endl;
    // cout << v[3] << endl;

    // vector<int> v;           type->7
    // v.push_back(1);
    // v.push_back(2);
    // v.push_back(3);
    // v.push_back(4);
    // v.clear();
    // if (v.empty())
    //     cout << "Empty";
    // else
    //     cout << "Not Empty";

    vector<int> v(5, 1);
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    v.resize(3);
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    v.resize(5);
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    v.resize(10, 5);
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;

    return 0;
}