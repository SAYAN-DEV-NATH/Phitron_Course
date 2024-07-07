/* #include <bits/stdc++.h> // Without constructor using array
using namespace std;
class Product
{
public:
    int id;
    string name;
    double price;
    Product(int id, string name, double price)
    {
        this->id = id;
        this->name = name;
        this->price = price;
    }
};
int main()
{
    int n;
    cin >> n;
    Product product[n];
    for (int i = 0; i < n; i++)
    {
        cin >> product[i].id >> product[i].name >> product[i].price;
    }
    for (int i = 0; i < n; i++)
    {
        cout << product[i].id << " " << product[i].name << " " << product[i].price << endl;
    }
    return 0;
} */

/* #include <bits/stdc++.h> // Without constructor and value initialization in array
using namespace std;
class Product
{
public:
    int id;
    string name;
    double price;
    Product(){}; // default constructor
    Product(int id, string name, double price)
    {
        this->id = id;
        this->name = name;
        this->price = price;
    }
};
int main()
{
    Product product[3] = {
        Product(1, "Laptop", 45.2),
        Product(2, "Mobile", 23.2),
        Product(3, "Tablet", 14.2)};
    for (int i = 0; i < 3; i++)
    {
        cout << product[i].id << " " << product[i].name << " " << product[i].price << endl;
    }
    return 0;
} */

/* #include <bits/stdc++.h> // Without constructor and value input in array
using namespace std;
class Product
{
public:
    int id;
    string name;
    double price;
    Product(){};                               // default constructor
    Product(int id, string name, double price) // constructor
    {
        this->id = id;
        this->name = name;
        this->price = price;
    }
    void setValue(int id, string name, double price) // function -> method
    {
        this->id = id;
        this->name = name;
        this->price = price;
    }
};
int main()
{
    int n;
    cin >> n;
    Product product[n];
    for (int i = 0; i < n; i++)
    {
        int id;
        string name;
        double price;
        cin >> id >> name >> price;
        product[i].setValue(id, name, price);
    }
    for (int i = 0; i < 3; i++)
    {
        cout << product[i].id << " " << product[i].name << " " << product[i].price << endl;
    }
    return 0;
} */

/* #include <bits/stdc++.h> // Without constructor and value input in array
using namespace std;
class Product
{
public:
    int id;
    string name;
    double price;
    Product(){};                               // default constructor
    Product(int id, string name, double price) // constructor
    {
        this->id = id;
        this->name = name;
        this->price = price;
    }
    void setValue(int id, string name, double price) // function -> method
    {
        this->id = id;
        this->name = name;
        this->price = price;
    }
    double calc_tax()
    {
        return this->price * (5 / 100.0);
    }
};
int main()
{
    int n;
    cin >> n;
    Product product[n];
    for (int i = 0; i < n; i++)
    {
        int id;
        string name;
        double price;
        cin >> id >> name >> price;
        product[i].setValue(id, name, price);
    }
    cout << product[0].calc_tax() << endl;
    cout << product[1].calc_tax() << endl;
    cout << product[2].calc_tax() << endl;
    // for (int i = 0; i < 3; i++)
    // {
    //     cout << product[i].id << " " << product[i].name << " " << product[i].price << endl;
    // }
    return 0;
} */
#include <bits/stdc++.h> // Range base for loop using
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
    // int a[5] = {1, 2, 3, 4, 5};
    // for (int x : a)
    // {
    //     cout << x << " ";
    // }
    int n;
    cin >> n;
    Product product[n];
    for (Product &x : product)
    {
        cin >> x.id >> x.name >> x.price;
    }
    for (Product &x : product)
    {
        cout << x.id << " " << x.name << " " << x.price << endl;
    }
    return 0;
}

/* #include <bits/stdc++.h> // Range base for loop and max_element and min_element soluation
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
    // int a[5] = {1, 2, 3, 4, 5};
    // cout << *max_element(a, a + 5);
    int n;
    cin >> n;
    Product product[n];
    for (Product &x : product)
    {
        cin >> x.id >> x.name >> x.price;
    }
    Product *max_product = max_element(product, product + n, cmp);
    cout << max_product->id << " " << max_product->name << " " << max_product->price;
    return 0;
} */
