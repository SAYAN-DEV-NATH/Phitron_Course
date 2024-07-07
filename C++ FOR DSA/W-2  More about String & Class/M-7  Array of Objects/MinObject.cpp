#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string name;
    int roll;
    int mark;
};
int main()
{
    int n;
    cin >> n;
    Student *arr = new Student[n];
    for (int i = 0; i < n; i++)
    {
        cin.ignore();
        getline(cin, arr[i].name);
        cin >> arr[i].roll >> arr[i].mark;
    }
    Student mn;
    mn.mark = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (arr[i].mark < mn.mark)
        {
            mn = arr[i];
        }
    }
    cout << mn.name << " " << mn.roll << " " << mn.mark << endl;
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
class Product
{
public:
    int id;
    string name;
    double price;
};
bool cmp(Product a, Product b)
{
    if (a.price < b.price)
        return true;
    else
        return false;
}
int main()
{
    int n;
    cin >> n;
    Product products[n];
    for (Product &x : products)
    {
        cin >> x.id >> x.name >> x.price;
    }
    Product *mn = min_element(products, products + n, cmp);
    cout << mn->id << " " << mn->name << " " << mn->price << endl;
    return 0;
}
