#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    int roll;
    int cls;
    double gpa;
    Student(int roll, int cls, double gpa)
    {
        this->roll = roll;
        this->cls = cls;
        this->gpa = gpa;
    }
};
Student *sun()
{
    Student *kamal = new Student(1, 5, 5.45);
    return kamal;
}
int main()
{
    Student *ans = sun();
    cout << ans->roll << " " << ans->cls << " " << ans->gpa << "\n";
    delete ans;
    return 0;
}