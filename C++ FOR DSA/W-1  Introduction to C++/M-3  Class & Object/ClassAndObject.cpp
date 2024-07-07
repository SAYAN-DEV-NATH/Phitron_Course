#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    char name[100];
    int roll;
    double cgpa;
};
int main()
{
    Student s, k;

    // --> Initialize
    /*s.roll = 01;
    s.cgpa = 3.87;
    char temp[100] = "KamalIslam";
    strcpy(s.name, temp);*/

    // --> Input
    /*fgets(s.name, 100, stdin);
    cin >> s.roll >> s.cgpa;
    getchar();
    fgets(k.name, 100, stdin);
    cin >> k.roll >> k.cgpa; */

    cin.getline(s.name, 100);
    cin >> s.roll >> s.cgpa;
    getchar();
    cin.getline(k.name, 100);
    cin >> k.roll >> k.cgpa;

    /*cin >> s.name >> s.roll >> s.cgpa;
    cin >> k.name >> k.roll >> k.cgpa;*/

    cout << s.name << " " << s.roll << " " << s.cgpa << endl;
    cout << k.name << " " << k.roll << " " << k.cgpa << endl;
    return 0;
}