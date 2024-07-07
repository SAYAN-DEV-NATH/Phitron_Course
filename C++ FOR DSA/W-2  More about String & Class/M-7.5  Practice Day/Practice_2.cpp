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
        cin.ignore();
        cin >> arr[i].name >> arr[i].roll >> arr[i].mark;
    }
    for (int i = n - 1; i >= 0; i--)
    {
        cout << arr[i].name << " " << arr[i].roll << " " << arr[i].mark << "\n";
    }
    delete[] arr;
    return 0;
}