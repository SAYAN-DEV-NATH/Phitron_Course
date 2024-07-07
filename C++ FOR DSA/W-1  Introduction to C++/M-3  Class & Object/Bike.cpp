#include <bits/stdc++.h>
using namespace std;
class Bike
{
public:
    string color;
    int speed, length;
};
int main()
{
    Bike honda, royal;

    // cin.getline(honda.color, 10);
    cin >> honda.color;
    cin >> honda.speed >> honda.length;
    getchar();
    // cin.getline(royal.color, 10);
    cin >> royal.color;
    cin >> royal.speed >> royal.length;

    cout << honda.color << " " << honda.speed << "km/hr " << honda.length << " feet" << endl;
    cout << royal.color << " " << royal.speed << "km/hr " << royal.length << " feet" << endl;
    return 0;
}