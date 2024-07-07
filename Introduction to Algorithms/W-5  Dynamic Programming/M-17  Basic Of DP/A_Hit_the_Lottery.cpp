#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int denominations[] = {100, 50, 20, 10, 5, 1};
    int cnt = 0;
    for (int i = 0; i < 6; ++i)
    {
        cnt += n / denominations[i];
        n %= denominations[i];
    }
    cout << cnt << endl;
    return 0;
}
