/*
class Solution
{
public:
    vector<bool> visited;
    vector<int> parent;
    bool ans = false;

    void bfs(int src, vector<int> adj[])
    {
        queue<int> q;
        q.push(src);
        visited[src] = true;

        while (!q.empty())
        {
            int f = q.front();
            q.pop();
            for (int c : adj[f])
            {
                if (visited[c] && parent[f] != c)
                {
                    ans = true;
                }
                if (!visited[c])
                {
                    q.push(c);
                    visited[c] = true;
                    parent[c] = f;
                }
            }
        }
    }
    bool isCycle(int V, vector<int> adj[])
    {
        visited.resize(V, false);
        parent.resize(V);

        for (int i = 0; i < V; i++)
        {
            if (!visited[i])
            {
                bfs(i, adj);
            }
        }

        return ans;
    }
};
*/