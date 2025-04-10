DFS of Graph

    void
    dfsHelper(int node, vector<vector<int>> &adj, vector<int> &result, vector<bool> &visited)
{
    visited[node] = true;
    result.push_back(node);

    for (int neighbor : adj[node])
    {
        if (!visited[neighbor])
        {
            dfsHelper(neighbor, adj, result, visited);
        }
    }
}
vector<int> dfs(vector<vector<int>> &adj)
{
    int n = adj.size();
    vector<int> result;
    vector<bool> visited(n, false);

    dfsHelper(0, adj, result, visited);

    return result;