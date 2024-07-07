#include <bits/stdc++.h>
using namespace std;
class Cricketer
{
public:
    int jersey_no;
    char country[20];
};

int main()
{
    int j;
    char ctry[10];
    cin >> j >> ctry;
    Cricketer *dhoni = new Cricketer;
    dhoni->jersey_no = j;
    strcpy(dhoni->country, ctry);

    Cricketer *kohli = dhoni;
    // delete dhoni; //dhoni delete kora mane tar address delete kora.

    cout << kohli->jersey_no << " " << kohli->country;
    return 0;
}
