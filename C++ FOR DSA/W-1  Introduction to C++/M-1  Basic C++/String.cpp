#include <iostream>
#include <string>
using namespace std;
int main()
{
    char str[100];
    int a;
    cin >> a;
    
    // cin >> str;
    // cout << str << endl;

    getchar();
    fgets(str, 100, stdin);
    cout << a << "." << str << endl;
    return 0;
}