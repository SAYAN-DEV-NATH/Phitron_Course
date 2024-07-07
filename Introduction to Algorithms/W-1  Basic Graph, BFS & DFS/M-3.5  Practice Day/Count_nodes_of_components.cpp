#include <bits/stdc++.h>
using namespace std;
const int N = 20;
vector<int> adj[N];
bool vis[N];
int cnt = 0;

void dfs(int src) {
    cnt++;
    vis[src] = true;
    for (int child : adj[src]) {
        if (!vis[child]) {
            dfs(child);
        }
    }
}

int main() {
    int n, e;
    cin >> n >> e;
    while (e--) {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    priority_queue<int, vector<int>, greater<int>> pq;
    for (int i = 0; i < n; i++) {
        if (!vis[i]) {
            dfs(i);
            pq.push(cnt);
            cnt = 0;
        }
    }

    while (!pq.empty()) {
        cout << pq.top() << " ";
        pq.pop();
    }

    return 0;
}
