#include <bits/stdc++.h>

using namespace std;

void addEdge(vector<int> adj[], int u, int v)
{
    adj[u].push_back(v);
    adj[v].push_back(u);
}

void dfs(int node, vector<int> &visited, vector<int> adj[], vector<int> &storeDfs)
{
    storeDfs.push_back(node);
    visited[node] = 1;
    for(auto i : adj[node])
    {
        if(!visited[i])
            dfs(i, visited, adj, storeDfs);
    }
}

vector<int> dfsOfGraph(int V, vector<int> adj[])
{
    vector<int> storeDfs;
    vector<int> visited(V, 0);

    for(int i = 0; i < V; i++)
    {
        if(! visited[i])
        {
            dfs(i, visited, adj, storeDfs);
        }
    }
    return storeDfs;
}

int main()
{
    int V = 5;
    vector<int> adj[V];

    addEdge(adj, 0, 1);
    addEdge(adj, 0, 4);
    addEdge(adj, 1, 2);
    addEdge(adj, 1, 3);
    addEdge(adj, 1, 4);
    addEdge(adj, 2, 3);
    addEdge(adj, 3, 4);

    vector<int> v = dfsOfGraph(5, adj);

    for (auto i : v)
        cout << i << " ";
    cout << endl;
}