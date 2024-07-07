#include <bits/stdc++.h>
using namespace std;
const int N = 1e5;
vector<int> Parent(N, -1);
vector<int> Level(N, 0);

int DSU_Find(int Node) // ....................Best Case of Find
{
    if (Parent[Node] == -1)
        return Node;
    int leader = DSU_Find(Parent[Node]);
    Parent[Node] = leader;
    return leader;
}
void DSU_Union_By_Level(int Node1, int Node2)
{
    int LeaderA = DSU_Find(Node1);
    int LeaderB = DSU_Find(Node2);

    if (Level[LeaderA] > Level[LeaderB])
        Parent[LeaderB] = LeaderA;
    else if (Level[LeaderA] < Level[LeaderB])
        Parent[LeaderA] = LeaderB;
    else
    {
        Parent[LeaderA] = LeaderB;
        Level[LeaderB]++;
    }
}
int main()
{

    DSU_Union_By_Level(3, 2);
    DSU_Union_By_Level(2, 1);
    DSU_Union_By_Level(1, 0);

    for (int i = 0; i < 4; i++)
        cout << i << " " << DSU_Find(i) << endl;

    return 0;
}