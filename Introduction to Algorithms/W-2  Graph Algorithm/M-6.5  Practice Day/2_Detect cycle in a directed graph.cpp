/*
class Solution
{
public:
    vector<bool> visited;
    vector<bool> path;
    bool ans = false;

    void dfs(int src, vector<int> adj[])
    {
        visited[src] = true;
        path[src] = true;

        for (int c : adj[src])
        {
            if (path[c])
            {
                ans = true;
            }
            if (!visited[c])
            {
                dfs(c, adj);
            }
        }
        path[src] = false;
    }
    bool isCyclic(int V, vector<int> adj[])
    {
        visited.resize(V, false);
        path.resize(V, false);

        for (int i = 0; i < V; i++)
        {
            if (!visited[i])
            {
                dfs(i, adj);
            }
        }
        return ans;
    }
};
*/