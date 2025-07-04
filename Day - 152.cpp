Bellman - Ford

              vector<int>
              bellmanFord(int V, vector<vector<int>> &edges, int src)
{
    const int INF = 1e8;
    vector<int> dist(V, INF);
    dist[src] = 0;
    bool flag;

    for (int i = 0; i < V; i++)
    {
        flag = true;
        for (auto it : edges)
        {
            int u = it[0];
            int v = it[1];
            int wt = it[2];

            if (dist[u] != INF && dist[u] + wt < dist[v])
            {
                flag = false;
                dist[v] = dist[u] + wt;
            }
        }
        if (flag)
            return dist;
    }
    return {-1};