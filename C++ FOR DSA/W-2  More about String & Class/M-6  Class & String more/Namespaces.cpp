#include <bits/stdc++.h>

using namespace std;
namespace Kamal
{
    int age = 24;
    void Hello()
    {
        cout << "Kamal namespaces ";
    }
}
namespace Jamal
{
    int age2 = 30;
    void Hello2()
    {
        cout << "Jamal namespaces ";
    }
}
using namespace Kamal;
using namespace Jamal;
int main()
{
    /* Kamal::Hello();                  //without using namespace
    cout << Kamal::age << endl;
    Jamal::Hello2();
    cout << Jamal::age2 << endl; */

    Hello(); // using namespace
    cout << age << endl;
    Hello2();
    cout << age2 << endl;

    return 0;
}