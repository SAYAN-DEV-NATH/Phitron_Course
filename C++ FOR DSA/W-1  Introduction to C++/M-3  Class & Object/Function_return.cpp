/* #include <bits/stdc++.h>
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
Student sun()
{
    Student kamal(1, 5, 4.99); // this is valid
    return kamal;
}
int main()
{
    Student ans = sun();
    cout << ans.roll << " " << ans.cls << " " << ans.gpa << endl;
    return 0;
} */

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
    Student *kamal = new Student(1, 5, 5.00); // Dynamic object create korthe hbe na korle run hbe na
    return kamal;
}
int main()
{
    Student *ans = sun();
    cout << ans->roll << " " << ans->cls << " " << ans->gpa << "\n";
    return 0;
}