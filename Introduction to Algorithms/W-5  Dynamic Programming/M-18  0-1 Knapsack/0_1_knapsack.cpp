#include <bits/stdc++.h>
using namespace std;

int knapsack(int n, int weight[], int value[], int W)
{
    if (n < 0 || W == 0)
        return 0;

    if (weight[n] <= W)
    {
        // duita options
        // niye deka, na niye deka
        int op1 = knapsack(n - 1, weight, value, W - weight[n]) + value[n];
        int op2 = knapsack(n - 1, weight, value, W);
        return max(op1, op2);
    }
    else
    {
        // ekta option
        // na niye deka
        int op2 = knapsack(n - 1, weight, value, W);
        return op2;
    }
}
int main()
{
    int n;
    cin >> n;

    int weight[n], value[n];
    for (int i = 0; i < n; i++)
        cin >> weight[i];
    for (int i = 0; i < n; i++)
        cin >> value[i];

    int W;
    cin >> W;
    cout << knapsack(n - 1, weight, value, W);

    return 0;
}