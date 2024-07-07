#include <bits/stdc++.h>
#define fastread() (ios_base::sync_with_stdio(0), cin.tie(0));
#define endl "\n"
using namespace std;
const int N = 1e5+5;
vector<int> adj[N];
int par[N];
bool vis[N];

void bfs(int src) {
    queue<int> q;
    q.push(src);
    vis[src] = true;
    while(!q.empty()) {
        int f = q.front();
        q.pop();
        for(int c:adj[f]) {
            if(!vis[c]) {
                vis[c] = true;
                par[c] = f;
                q.push(c);
            }
        }
    }
}
int main() {
    int n, m;
    cin >> n >> m;
    memset(vis, false, sizeof(vis));
    memset(par, -1, sizeof(par));
    while(m--) {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    bfs(1);
    if(vis[n]) {
        int x = n, cnt = 0;
    stack<int> ans;
    while(x!=-1) {
        cnt++;
        ans.push(x);
        x = par[x];
    }
    cout << cnt << endl;
    while(!ans.empty()) {
        cout << ans.top() << " ";
        ans.pop();
    }
    }else {
        cout << "IMPOSSIBLE"<<endl;
    }
    return 0;
}