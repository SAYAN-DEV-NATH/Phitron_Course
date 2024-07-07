#include <bits/stdc++.h>
using namespace std;
const int N = 20;
vector<int> adj[N];
bool vis[N];

void dfs(int src){
    vis[src] = true;
    for(int child:adj[src]){
        if(!vis[child]){
            dfs(child);
        }
    }
}
int main(){
    int n, e;
    cin >> n >> e;
    while(e--){
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }    
    int cnt = 0;
    for(int i=0; i<n; i++){
        if(!vis[i]){
            cnt++;
            dfs(i);
        }
    }
    cout << cnt << endl;
    return 0;
}