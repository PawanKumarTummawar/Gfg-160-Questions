Undirected Graph Cycle

    bool
    dfs(int i, int par, vector<vector<int>> &adj, vector<bool> &visited)
{
    visited[i] = true;
    for (auto child : adj[i])
    {
        if (!visited[child])
        {
            if (dfs(child, i, adj, visited))
            {
                return true;
            }
        }
        else if (child != par)
        {
            return true;
        }
    }
    return false;
}
bool isCycle(int V, vector<vector<int>> &edges)
{
    vector<vector<int>> adj(V);
    for (auto x : edges)
    {
        adj[x[0]].push_back(x[1]);
        adj[x[1]].push_back(x[0]);
    }
    vector<bool> visited(V, false);

    for (int i = 0; i < V; i++)
    {
        if (!visited[i] && dfs(i, -1, adj, visited))
        {
            return true;
        }
    }
    return false;