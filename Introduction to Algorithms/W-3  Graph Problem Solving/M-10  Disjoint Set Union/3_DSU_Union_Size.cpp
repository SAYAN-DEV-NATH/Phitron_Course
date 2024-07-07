#include <bits/stdc++.h>
using namespace std;

const int N = 1e5;
vector<int> Parent(N, -1);
vector<int> Size(N, 1);

int DSU_Find(int Node) // ..........................Best Case of Find
{
    if (Parent[Node] == -1)
        return Node;

    int Leader = DSU_Find(Parent[Node]);
    Parent[Node] = Leader;
    return Leader;
}
void DSU_Union_By_Size(int Node1, int Node2) // ....Best Case of Union
{
    int LeaderA = DSU_Find(Node1);
    int LeaderB = DSU_Find(Node2);
    if (Size[LeaderA] > Size[LeaderB])
    {
        Parent[LeaderB] = LeaderA;
        Size[LeaderA] += Size[LeaderB];
    }
    else
    {
        Parent[LeaderA] = LeaderB;
        Size[LeaderB] += Size[LeaderA];
    }
}
int main()
{
    DSU_Union_By_Size(3, 2);
    DSU_Union_By_Size(2, 1);
    DSU_Union_By_Size(1, 0);
    for (int i = 0; i < 4; i++)
        cout << i << " " << DSU_Find(i) << endl;
    return 0;
}