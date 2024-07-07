#include <bits/stdc++.h>
#define fastread() (ios_base::sync_with_stdio(0), cin.tie(0));
#define endl "\n"
using namespace std;
vector<pair<int,int>> adj[105];
vector<int> des(105, INT_MAX);
class cmp {
    public:
    bool operator()(pair<int,int> a, pair<int,int> b){
        return a.second > b.second;
    }
};
void bfs(int src) {
    priority_queue<pair<int,int>, vector<pair<int,int>>, cmp> pq;
    pq.push({src, 0});
    des[src] = 0;
    while(!pq.empty()) {
        pair<int,int> p = pq.top();
        pq.pop();
        int node = p.first;
        int cost = p.second;
        for(pair<int,int> child:adj[node]) {
            int childNode = child.first;
            int childCost = child.second;
            if(childCost + cost < des[childNode]) {
                des[childNode] = cost + childCost;
                pq.push({childNode, des[childNode]});
            }
        }
    }
}
int main() {
    int n, s, f;
    cin >> n >> s >> f;
    for(int i=1; i<=n; i++) {
        for(int j=1; j<=n; j++) {
            int x; cin >> x;
            if(i!=j and x != -1)
                adj[i].push_back({j, x});
        }
    }
    bfs(s);
    if(des[f]==INT_MAX) cout << "-1" << endl;
    else cout << des[f] << endl;
    return 0;
}