#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string name;
    int roll;
    int mark;
};
int main()
{
    int n;
    cin >> n;
    Student *arr = new Student[n];
    for (int i = 0; i < n; i++)
    {
        getchar();
        getline(cin, arr[i].name);
        cin >> arr[i].roll >> arr[i].mark;
    }
    Student mx;
    mx.mark = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (mx.mark < arr[i].mark)
        {
            mx = arr[i];
        }
    }
    cout << mx.name << " " << mx.roll << " " << mx.mark << endl;
    return 0;
}