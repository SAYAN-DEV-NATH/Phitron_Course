#include <bits/stdc++.h>
using namespace std;
class Product
{
public:
    int id;
    string name;
    double price;
};
bool cmp(Product &a, Product &b)
{
    return a.price < b.price;
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
    sort(products, products + n, cmp);
    for (Product &x : products)
    {
        cout << x.id << " " << x.name << " " << x.price << "\n";
    }
    return 0;
}