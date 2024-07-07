#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string name;
    int roll;
    Student(string name, int roll)
    {
        this->name = name;
        this->roll = roll;
    }
};
class cmp
{
public:
    bool operator()(Student &a, Student &b)
    {
        if (a.name > b.name)
            return true;
        else if (a.name < b.name)
            return false;
        else
        {
            return a.roll < b.roll;
        }
    }
};
int main()
{
    int test;
    cin >> test;
    priority_queue<Student, vector<Student>, cmp> pq;
    while (test--)
    {
        string name;
        int roll;
        cin >> name >> roll;
        Student ob(name, roll);
        pq.push(ob);
    }
    while (!pq.empty())
    {
        cout << pq.top().name << " " << pq.top().roll << endl;
        pq.pop();
    }
    return 0;
}