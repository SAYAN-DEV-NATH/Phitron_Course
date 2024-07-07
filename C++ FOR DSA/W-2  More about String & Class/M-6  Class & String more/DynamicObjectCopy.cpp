#include <bits/stdc++.h>

using namespace std;
class Person
{
public:
    string name;
    int age;
    Person(string name, int age)
    {
        this->name = name;
        this->age = age;
    }
};
int main()
{
    string a, b;
    int c, d;
    getline(cin, a);
    cin >> c;
    cin.ignore();
    getline(cin, b);
    cin >> d;

    Person *Kamal = new Person(a, c);
    Person *Jamal = new Person(b, d);
    // Kamal = Jamal;                   //Copy kore na

    // Kamal->name = Jamal->name;       //Copy kora
    // Kamal->age = Jamal->age;

    *Kamal = *Jamal; // Copy kora
    delete Jamal;
    cout << Kamal->name << " " << Kamal->age << endl;
    return 0;
}