#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string nm;
    int cls;
    char s;
    int id;
    int math;
    int eng;
};
bool cmp(Student a, Student b)
{

    if ((a.math + a.eng) > (b.math + b.eng))
        return true;
    else if ((a.math + a.eng) == (b.math + b.eng))
    {
        if (a.id < b.id)
            return true;
        else
            return false;
    }
    else
        return false;
}
int main()
{
    int n;
    cin >> n;
    Student *arr = new Student[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i].nm >> arr[i].cls >> arr[i].s >> arr[i].id >> arr[i].math >> arr[i].eng;
    }
    sort(arr, arr + n, cmp);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i].nm << " " << arr[i].cls << " " << arr[i].s << " " << arr[i].id << " " << arr[i].math << " " << arr[i].eng << "\n";
    }
    delete[] arr;
    return 0;
}