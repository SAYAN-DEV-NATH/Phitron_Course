#include <iostream>

using namespace std;
int main()
{
    int n;
    cin >> n;
    switch (n % 2) // Type 1
    {
    case 1:
        cout << "One\n";
        break;
    case 2:
        cout << "Two\n";
        break;
    case 3:
        cout << "Three\n";
        break;
    default:
        cout << "This not 1, 2, and 3\n";
        break;
    }

    /*switch (n)  // Valid
    {
    case 'a':
        cout << "Vowel\n";
        break;
    
    default:
        cout << "Consonant\n";
        break;
    }*/

    /*switch (n>0) // Invalid
    {
    case 1:
        cout << "One\n";
        break;

    default:
        cout << ""
        break;
    }*/
    return 0;
}