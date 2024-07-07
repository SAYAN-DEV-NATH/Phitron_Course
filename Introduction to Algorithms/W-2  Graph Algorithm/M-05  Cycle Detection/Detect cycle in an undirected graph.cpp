/*

class Solution
{
public:
    vector<bool> vis;
    vector<int> parent;
    bool ans = false;

    void dfs(int src, vector<int> adj[])
    {
        vis[src] = true;
        for (int c : adj[src])
        {
            if (vis[c] && parent[src] != c)
                ans = true;

            if (!vis[c])
            {
                parent[c] = src;
                dfs(c, adj);
            }
        }
    }

    bool isCycle(int V, vector<int> adj[])
    {

        vis.resize(V, false);
        parent.resize(V, -1);

        for (int i = 0; i < V; i++)
        {
            if (!vis[i])
                dfs(i, adj);
        }

        return ans;
    }
};

*/