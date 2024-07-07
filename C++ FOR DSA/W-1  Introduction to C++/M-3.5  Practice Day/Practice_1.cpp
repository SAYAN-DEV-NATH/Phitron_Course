#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    // string name;
    char name[100];
    int roll;
    char section;
    int math;
    int cls;
    Student();
    Student(char name[], int roll, char section, int math, int cls)
    {
        strcpy(this->name, name);
        this->roll = roll;
        this->section = section;
        this->math = math;
        this->cls = cls;
    }
};
int main()
{
    // string name;
    Student K("Kamal Islam", 100, 'D', 11, 9);
    // Student J("Jamal Islam", 101, 'E', 12, 9);
    // Student T("Thmal Islam", 102, 'F', 13, 9);

    cout << K.name << " " << K.roll << " " << K.section << " " << K.math << " " << K.cls << endl;
    // cout << J.name << " " << J.roll << " " << J.section << " " << J.math << " " << J.cls << endl;
    // cout << T.name << " " << T.roll << " " << T.section << " " << T.math << " " << T.cls << endl;

    // (K.math > J.math && K.math > T.math) ? cout << K.name : (J.math > K.math && J.math > T.math) ? cout << K.name : cout << T.name;
    return 0;
}