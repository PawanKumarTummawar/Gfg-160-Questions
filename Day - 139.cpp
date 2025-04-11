BFS of graph

    vector<int>
    bfs(vector<vector<int>> &adj)
{
    vector<int> ans;
    unordered_map<int, bool> visited;
    queue<int> q;
    q.push(0);
    visited[0] = true;
    while (!q.empty())
    {
        ans.push_back(q.front());
        auto z = q.front();
        q.pop();
        for (auto x : adj[z])
        {
            if (!visited[x])
            {
                q.push(x);
                visited[x] = true;
            }
        }
    }
    return ans;