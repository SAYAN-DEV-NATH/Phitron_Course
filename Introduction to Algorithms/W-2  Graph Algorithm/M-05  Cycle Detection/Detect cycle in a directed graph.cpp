/*
class Solution
{
public:
    bool ans = false;
    vector<bool> vis;
    vector<bool> pathVis;

    void dfs(int src, vector<int> adj[])
    {
        vis[src] = true;
        pathVis[src] = true;

        for (int c : adj[src])
        {
            if (pathVis[c])
                ans = true;
            if (!vis[c])
                dfs(c, adj);
        }
        pathVis[src] = false;
    }

    bool isCyclic(int V, vector<int> adj[])
    {
        vis.resize(V, false);
        pathVis.resize(V, false);

        for (int i = 0; i < V; i++)
        {
            if (!vis[i])
                dfs(i, adj);
        }

        return ans;
    }
};
*/