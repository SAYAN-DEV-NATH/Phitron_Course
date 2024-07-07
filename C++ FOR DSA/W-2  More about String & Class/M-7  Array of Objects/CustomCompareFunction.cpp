#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string name;
    int roll;
    int mark;
};
bool cmp(Student a, Student b)
{
    if (a.mark >= b.mark) // Custom Compare function
        return true;
    else
        return false;

    // return (a.mark<=b.mark); don't use this time
}
int main()
{
    int n;
    cin >> n;
    Student *arr = new Student[n];
    for (int i = 0; i < n; i++)
    {
        cin.ignore();
        getline(cin, arr[i].name);
        cin >> arr[i].roll >> arr[i].mark;
    }
    sort(arr, arr + n, cmp);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i].name << " " << arr[i].roll << " " << arr[i].mark << endl;
    }
    return 0;
}
/* bool cmp(Student a, Student b)
{
    if (a.mark < b.mark)
        return true;
    else if (a.mark > b.mark)
        return false;
    else
    {
        if (a.roll < b.roll)
            return true;
        else
            return false;
    }

    // return a.roll<b.roll;
} */