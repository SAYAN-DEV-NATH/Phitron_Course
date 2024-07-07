#include <bits/stdc++.h>

using namespace std;
class Student
{
public:
    int roll, cls;
    double gpa;
    // Student(int r, int c, double g)
    // {
    //     roll = r;
    //     cls = c;
    //     gpa = g;
    // }
    Student(int roll, int cls, double gpa)
    {
        // (*this).roll=roll; // another valid way --> dereference kore access kora
        this->roll = roll;
        this->cls = cls;
        this->gpa = gpa;
    }
};
int main()
{
    Student sayan(29, 9, 5.00); // Constructor called
    Student kamal(1, 10, 5.00);

    cout << sayan.roll << " " << sayan.cls << " " << sayan.gpa << endl;
    cout << kamal.roll << " " << kamal.cls << " " << kamal.gpa << endl;
    return 0;
}