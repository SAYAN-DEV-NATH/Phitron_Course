#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    int id;
    char name[101];
    char sec;
    int mark;
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        Student a, b, c;
        cin >> a.id >> a.name >> a.sec >> a.mark;
        cin >> b.id >> b.name >> b.sec >> b.mark;
        cin >> c.id >> c.name >> c.sec >> c.mark;
        if (a.mark == b.mark && b.mark == c.mark)
            cout << a.id << " " << a.name << " " << a.sec << " " << a.mark;
        else if (a.mark > b.mark && a.mark > c.mark)
            cout << a.id << " " << a.name << " " << a.sec << " " << a.mark;
        else if (a.mark == b.mark && a.mark > c.mark)
            cout << a.id << " " << a.name << " " << a.sec << " " << a.mark;
        else if (a.mark > b.mark && a.mark == c.mark)
            cout << a.id << " " << a.name << " " << a.sec << " " << a.mark;
        else if (b.mark > a.mark && b.mark > c.mark)
            cout << b.id << " " << b.name << " " << b.sec << " " << b.mark;
        else if (b.mark == a.mark && b.mark > c.mark)
            cout << b.id << " " << b.name << " " << b.sec << " " << b.mark;
        else if (b.mark > a.mark && b.mark == c.mark)
            cout << b.id << " " << b.name << " " << b.sec << " " << b.mark;
        else if (c.mark > a.mark && c.mark > b.mark)
            cout << c.id << " " << c.name << " " << c.sec << " " << c.mark;
        else if (c.mark == a.mark && c.mark > b.mark)
            cout << a.id << " " << a.name << " " << a.sec << " " << a.mark;
        else
            cout << b.id << " " << b.name << " " << b.sec << " " << b.mark;
        cout << "\n";
    }

    return 0;
}
//  cout<<a.id<<" "<<a.name<<" "<<a.sec<<" "<<a.mark