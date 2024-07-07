#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, e;
    cin >> n >> e;
    vector<int> adj[n];
    while(e--){
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    int test; cin >> test;
    while(test--) {
        int x; cin >> x;
        int sz = adj[x].size();
        if(sz==0 ) cout << "-1" << endl;
        else {
            priority_queue<int, vector<int>> pq;
            for(int c:adj[x]) {
                pq.push(c);
            }
            while(!pq.empty()) {
                cout << pq.top() << " ";
                pq.pop();
            }cout<<endl;
        }
    }
    return 0;
}
