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
        getline(cin, arr[i].name);
        cin >> arr[i].roll >> arr[i].mark;
    }

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i].mark > arr[j].mark)
            {
                swap(arr[i], arr[j]);
            }
            if (arr[i].mark == arr[j].mark)
            {
                if (arr[i].roll > arr[j].roll)
                {
                    swap(arr[i], arr[j]);
                }
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i].name << " " << arr[i].roll << " " << arr[i].mark << endl;
    }
    return 0;
}