#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string name;
    int roll;
    int mark;
    Student(string name, int roll, int mark)
    {
        this->name = name;
        this->roll = roll;
        this->mark = mark;
    }
};
class cmp
{
public:
    bool operator()(Student a, Student b)
    {
        if (a.mark < b.mark)
            return true;
        else if (a.mark > b.mark)
            return false;
        else
        {
            return a.roll > b.roll;
        }
    }
};
int main()
{
    int n;
    cin >> n;
    priority_queue<Student, vector<Student>, cmp> pq;
    for (int i = 0; i < n; i++)
    {
        string name;
        int roll, mark;
        cin >> name >> roll >> mark;
        Student st(name, roll, mark);
        pq.push(st);
    }
    int queries;
    cin >> queries;
    while (queries--)
    {
        int val;
        cin >> val;
        if (val == 0)
        {
            n++;
            string name;
            int roll, mark;
            cin >> name >> roll >> mark;
            Student st(name, roll, mark);
            pq.push(st);
            cout << pq.top().name << " " << pq.top().roll << " " << pq.top().mark << endl;
        }
        else if (val == 1)
        {
            if (n > 0)
                cout << pq.top().name << " " << pq.top().roll << " " << pq.top().mark << endl;
            else
                cout << "Empty" << endl;
        }
        else if (val == 2)
        {
            if (n > 0)
            {
                n--;
                pq.pop();
                if (n > 0)
                    cout << pq.top().name << " " << pq.top().roll << " " << pq.top().mark << endl;
                else
                    cout << "Empty" << endl;
            }
            else
                cout << "Empty" << endl;
        }
    }
    return 0;
}