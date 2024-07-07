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
    // int *arr = new int[n];
    Student *arr = new Student[n];
    // Student arr[n];
    for (int i = 0; i < n; i++)
    {
        cin.ignore();
        getline(cin, arr[i].name);
        cin >> arr[i].roll >> arr[i].mark;
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i].name << " " << arr[i].roll << " " << arr[i].mark << endl;
    }
    return 0;
}