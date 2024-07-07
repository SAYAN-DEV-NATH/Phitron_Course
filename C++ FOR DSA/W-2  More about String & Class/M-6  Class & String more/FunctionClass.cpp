#include <bits/stdc++.h>

using namespace std;
class TEST
{
public:
    string name;
    int age;
    int mark1;
    int mark2;
    TEST(string name, int age, int mark1, int mark2)
    {
        this->name = name;
        this->age = age;
        this->mark1 = mark1;
        this->mark2 = mark2;
    }
    void display()
    {
        cout << name << endl;
        cout << age << endl;
    }
    int total()
    {
        return mark1 + mark2;
    }
};
int main()
{
    TEST s("Kamal Islam", 30, 25, 25);
    s.display();
    cout << s.total() << endl;
    return 0;
}