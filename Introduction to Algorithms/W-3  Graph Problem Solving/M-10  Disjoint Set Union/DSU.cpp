#include <bits/stdc++.h>
using namespace std;

vector<int> Parent;
vector<int> GroupSize;
vector<int> Level;
// int Parent[N];
// int GroupSize[N];
// int Level[N];
// void DSUInitialize(int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         Parent[i] = -1;
//         GroupSize[i] = 1;
//         Level[i] = 0;
//     }
// }

// int DSUFind(int node)// ..................Worst Case of Find
// {
//     if (Parent[node] == -1)
//         return node;
//     return DSUFind(Parent[node]);
// }
int DSU_Find(int node) // ....................Best Case of Find
{
    if (Parent[node] == -1)
        return node;
    int leader = DSU_Find(Parent[node]);
    Parent[node] = leader;
    return leader;
}

// void DSU_Union(int node1, int node2) // ...........Worst Case of Union
// {
//     int leaderA = DSU_Find(node1);
//     int leaderB = DSU_Find(node2);
//     Parent[leaderA] = leaderB;
// }
void DSU_Union_By_Size(int node1, int node2) // ....Best Case of Union
{
    int leaderA = DSU_Find(node1);
    int leaderB = DSU_Find(node2);
    if (GroupSize[leaderA] > GroupSize[leaderB])
    {
        Parent[leaderB] = leaderA;
        GroupSize[leaderA] += GroupSize[leaderB];
    }
    else
    {
        Parent[leaderA] = leaderB;
        GroupSize[leaderB] += GroupSize[leaderA];
    }
}
int main()
{
    int n = 7;
    // cin >> n;
    Parent.resize(n, -1);
    GroupSize.resize(n, 1);
    Level.resize(n, 0);

    // Parent[1] = 0;
    // Parent[2] = 1;

    // Parent[4] = 5;
    // Parent[3] = 4;

    // Parent[1] = 0;
    // Parent[2] = 1;
    // Parent[3] = 2;

    // Parent[4] = 5;
    // Parent[5] = 6;

    DSU_Union_By_Size(2, 3);
    cout << DSU_Find(2) << endl;
    DSU_Union_By_Size(3, 4);

    DSU_Union_By_Size(4, 5);

    cout << DSU_Find(1) << endl;
    DSU_Union_By_Size(5, 6);
    // DSU_Union_By_Size(1, 4);
    cout << DSU_Find(5) << endl;

    cout << DSU_Find(2) << " ";
    cout << DSU_Find(4) << endl;

    int node1 = 2, node2 = 4;
    // cin >> node1 >> node2;

    // DSU_Union_By_Size(node1, node2);
    cout << DSU_Find(2) << " ";
    cout << DSU_Find(4) << endl;

    return 0;
}