#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    /*int c = max(a, b);
    int d = min(a, b);
    cout << c << " " << d << endl;*/

    int mx = max({a, b, c, d});
    int mn = min({a, b, c, d});
    cout << mx << " " << mn << endl;
    
    return 0;
}