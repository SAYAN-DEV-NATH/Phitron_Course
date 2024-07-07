/* #include <bits/stdc++.h>
using namespace std;
class Product
{
public:
    int id;
    string name;
    double price;
};
int main()
{
    int n;
    cin >> n;
    Product produts[n];
    for (Product &x : produts)
    {
        cin >> x.id >> x.name >> x.price;
    }
    for (int i = 0, j = n - 1; i < j; i++, j--)
    {
        swap(produts[i], produts[j]);
    }
    for (Product &x : produts)
    {
        cout << x.id << " " << x.name << " " << x.price << endl;
    }
    return 0;
} */
// #include <bits/stdc++.h>
// using namespace std;
// class Product
// {
// public:
//     int id;
//     string name;
//     double price;
// };
// int main()
// {
//     int n;
//     cin >> n;
//     Product produts[n];
//     for (Product &x : produts)
//     {
//         cin >> x.id >> x.name >> x.price;
//     }
//     reverse(produts, produts + n);
//     for (Product &x : produts)
//     {
//         cout << x.id << " " << x.name << " " << x.price << endl;
//     }
//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;
class Product
{
public:
    int id;
    string name;
    double price;
};
int main()
{
    int n;
    cin >> n;
    Product produts[n];
    for (Product &x : produts)
    {
        cin >> x.id >> x.name >> x.price;
    }
    for (int i = 0, j = n - 1; i < j; i++, j--)
    {
        swap(produts[i].price, produts[j].price);
    }
    for (Product &x : produts)
    {
        cout << x.id << " " << x.name << " " << x.price << endl;
    }
    return 0;
}